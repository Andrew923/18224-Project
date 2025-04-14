import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib.colors import LinearSegmentedColormap

class SoftBodyPhysics:
    def __init__(self, grid_size=16, num_peripheral=3, radius=2.0, influence_radius=2.0):
        # Configuration
        self.grid_size = grid_size
        self.num_peripheral = num_peripheral
        self.central_mass = 1.0
        self.peripheral_mass = 0.5
        self.spring_constant = 0.5
        self.damping = 0.3
        self.time_step = 0.2
        self.force_magnitude = 2.0
        self.radius = radius
        self.influence_radius = influence_radius
        self.influence_radius_sq = influence_radius ** 2

        # Initialize central particle
        self.central_pos = np.array([grid_size/2, grid_size/2], dtype=float)
        self.central_vel = np.zeros(2)
        self.central_old_pos = self.central_pos.copy()

        # Initialize peripheral particles in a circle
        self.peripheral_pos = []
        angles = np.linspace(0, 2*np.pi, num_peripheral, endpoint=False) + np.pi/2
        for angle in angles:
            dx = radius * np.cos(angle)
            dy = radius * np.sin(angle)
            pos = self.central_pos + np.array([dx, -dy])  # Invert dy for coordinate system
            self.peripheral_pos.append(pos)
            
        self.peripheral_vel = [np.zeros(2) for _ in range(num_peripheral)]
        self.peripheral_old_pos = [pos.copy() for pos in self.peripheral_pos]

        # Calculate rest lengths
        self.center_to_periphery_rest_lengths = [radius] * num_peripheral
        self.periphery_to_periphery_rest_lengths = []
        for i in range(num_peripheral):
            j = (i + 1) % num_peripheral
            dist = np.linalg.norm(self.peripheral_pos[i] - self.peripheral_pos[j])
            self.periphery_to_periphery_rest_lengths.append(dist)

        # External force
        self.external_force = np.zeros(2)
        self.current_accel = np.zeros(2)

    def apply_force(self, force_x, force_y):
        self.external_force = np.array([force_x, force_y]) * self.force_magnitude

    def update(self):
        # Central particle update
        central_accel = self.external_force / self.central_mass
        self.current_accel = central_accel.copy()
        
        temp_pos = self.central_pos.copy()
        self.central_pos = 2*self.central_pos - self.central_old_pos + central_accel*self.time_step**2
        self.central_old_pos = temp_pos
        self.central_vel = (self.central_pos - self.central_old_pos) / self.time_step

        # Peripheral particles update
        peripheral_forces = [np.zeros(2) for _ in range(self.num_peripheral)]

        # Center-periphery forces
        for i in range(self.num_peripheral):
            direction = self.central_pos - self.peripheral_pos[i]
            distance = np.linalg.norm(direction)
            if distance > 0:
                direction /= distance
                displacement = distance - self.center_to_periphery_rest_lengths[i]
                rel_vel = self.central_vel - self.peripheral_vel[i]
                damping = self.damping * np.dot(rel_vel, direction)
                force = (self.spring_constant * displacement + damping) * direction
                peripheral_forces[i] += force

        # Periphery-periphery forces
        for i in range(self.num_peripheral):
            j = (i + 1) % self.num_peripheral
            self._add_peripheral_spring_force(i, j, i, peripheral_forces)

        # Update positions
        for i in range(self.num_peripheral):
            accel = peripheral_forces[i] / self.peripheral_mass
            temp_pos = self.peripheral_pos[i].copy()
            self.peripheral_pos[i] = 2*self.peripheral_pos[i] - self.peripheral_old_pos[i] + accel*self.time_step**2
            self.peripheral_old_pos[i] = temp_pos
            self.peripheral_vel[i] = (self.peripheral_pos[i] - self.peripheral_old_pos[i]) / self.time_step

        self._handle_boundary_collision()
        self.external_force = np.zeros(2)

    def _add_peripheral_spring_force(self, i, j, spring_idx, forces):
        direction = self.peripheral_pos[i] - self.peripheral_pos[j]
        distance = np.linalg.norm(direction)
        if distance > 0:
            direction /= distance
            displacement = distance - self.periphery_to_periphery_rest_lengths[spring_idx]
            rel_vel = self.peripheral_vel[i] - self.peripheral_vel[j]
            damping = self.damping * np.dot(rel_vel, direction)
            force = (self.spring_constant * displacement + damping) * direction
            forces[i] -= force
            forces[j] += force

    def _handle_boundary_collision(self):
        def clamp(pos, vel):
            for i in range(2):
                if pos[i] < 0:
                    pos[i] = 0
                    vel[i] *= -0.5
                elif pos[i] >= self.grid_size:
                    pos[i] = self.grid_size - 1e-9
                    vel[i] *= -0.5
        
        clamp(self.central_pos, self.central_vel)
        for pos, vel in zip(self.peripheral_pos, self.peripheral_vel):
            clamp(pos, vel)

    def get_led_grid(self):
        grid = np.zeros((self.grid_size, self.grid_size))
        cx, cy = int(round(self.central_pos[0])), int(round(self.central_pos[1]))
        
        for y in range(self.grid_size):
            for x in range(self.grid_size):
                # Check central particle
                dx = x - self.central_pos[0]
                dy = y - self.central_pos[1]
                if dx*dx + dy*dy <= self.influence_radius_sq:
                    grid[y, x] = 1.0
                    continue
                
                # Check peripheral particles
                for pos in self.peripheral_pos:
                    dx = x - pos[0]
                    dy = y - pos[1]
                    if dx*dx + dy*dy <= self.influence_radius_sq:
                        grid[y, x] = 1.0
                        break
        
        return grid


class SoftBodyVisualizer:
    def __init__(self, physics):
        self.physics = physics
        self.grid_size = physics.grid_size
        self.show_particles = True
        self.show_rest_lengths = True

        self.fig = plt.figure(figsize=(12, 6))
        self.grid_ax = self.fig.add_subplot(121)
        self.stats_ax = self.fig.add_subplot(122)

        # Binary colormap (black and blue)
        self.cmap = LinearSegmentedColormap.from_list("Binary", [(0,0,0), (0.1,0.4,1)])
        self.grid_data = np.zeros((self.grid_size, self.grid_size))
        self.img = self.grid_ax.imshow(self.grid_data, interpolation='nearest', cmap=self.cmap, vmin=0, vmax=1)

        # Grid lines
        self.grid_ax.grid(True, color='gray', linestyle='-', linewidth=0.5, alpha=0.5)
        self.grid_ax.set_xticks(np.arange(-0.5, self.grid_size, 1), minor=True)
        self.grid_ax.set_yticks(np.arange(-0.5, self.grid_size, 1), minor=True)
        self.grid_ax.set_xticks(np.arange(0, self.grid_size, 4))
        self.grid_ax.set_yticks(np.arange(0, self.grid_size, 4))
        self.grid_ax.set_ylim(self.grid_size - 0.5, -0.5)

        # Particle markers and spring lines
        self.central_marker = self.grid_ax.plot([], [], 'ro', markersize=10, alpha=0.7, visible=self.show_particles)[0]
        self.peripheral_markers = [
            self.grid_ax.plot([], [], 'go', markersize=8, alpha=0.7, visible=self.show_particles)[0]
            for _ in range(physics.num_peripheral)
        ]
        self.center_spring_lines = [
            self.grid_ax.plot([], [], 'g-', alpha=0.5, linewidth=1, visible=self.show_rest_lengths)[0]
            for _ in range(physics.num_peripheral)
        ]
        self.periphery_spring_lines = [
            self.grid_ax.plot([], [], 'b-', alpha=0.5, linewidth=1, visible=self.show_rest_lengths)[0]
            for _ in range(physics.num_peripheral)
        ]

        # Status text
        self.stats_ax.set_axis_off()
        self.velocity_text = self.stats_ax.text(0.1, 0.8, "", fontsize=12)
        self.accel_text = self.stats_ax.text(0.1, 0.7, "", fontsize=12)
        self.controls_text = self.stats_ax.text(0.1, 0.5, 
            "Controls:\n"
            "←→↑↓: Force\n"
            "R: Reset\n"
            "P: Toggle Particles\n"
            "L: Toggle Springs", fontsize=12)
        
        self.fig.canvas.mpl_connect('key_press_event', self.on_key_press)
        self.force_arrow = None

    def on_key_press(self, event):
        if event.key == 'left': self.physics.apply_force(-1, 0)
        elif event.key == 'right': self.physics.apply_force(1, 0)
        elif event.key == 'up': self.physics.apply_force(0, -1)
        elif event.key == 'down': self.physics.apply_force(0, 1)
        elif event.key == 'r': self.__init__(SoftBodyPhysics(grid_size=16))
        elif event.key == 'p': self.show_particles = not self.show_particles
        elif event.key == 'l': self.show_rest_lengths = not self.show_rest_lengths

    def update_frame(self, frame):
        self.physics.update()
        self.grid_data = self.physics.get_led_grid()
        self.img.set_array(self.grid_data)

        # Update visibility
        self.central_marker.set_visible(self.show_particles)
        for marker in self.peripheral_markers:
            marker.set_visible(self.show_particles)
        for line in self.center_spring_lines + self.periphery_spring_lines:
            line.set_visible(self.show_rest_lengths)

        # Update positions
        self.central_marker.set_data([self.physics.central_pos[0]], [self.physics.central_pos[1]])
        for i, marker in enumerate(self.peripheral_markers):
            marker.set_data([self.physics.peripheral_pos[i][0]], [self.physics.peripheral_pos[i][1]])

        # Update spring lines
        for i in range(self.physics.num_peripheral):
            self.center_spring_lines[i].set_data(
                [self.physics.central_pos[0], self.physics.peripheral_pos[i][0]],
                [self.physics.central_pos[1], self.physics.peripheral_pos[i][1]]
            )
            j = (i + 1) % self.physics.num_peripheral
            self.periphery_spring_lines[i].set_data(
                [self.physics.peripheral_pos[i][0], self.physics.peripheral_pos[j][0]],
                [self.physics.peripheral_pos[i][1], self.physics.peripheral_pos[j][1]]
            )

        # Update status
        self.velocity_text.set_text(f"Velocity: {self.physics.central_vel[0]:.2f}, {self.physics.central_vel[1]:.2f}")
        self.accel_text.set_text(f"Acceleration: {self.physics.current_accel[0]:.2f}, {self.physics.current_accel[1]:.2f}")

        if self.force_arrow:
            self.force_arrow.remove()
        if np.linalg.norm(self.physics.external_force) > 0:
            dx, dy = self.physics.external_force * 0.5
            self.force_arrow = self.grid_ax.arrow(
                self.physics.central_pos[0], self.physics.central_pos[1],
                dx, dy, fc='red', ec='red', head_width=0.5
            )

        return [self.img, self.central_marker] + self.peripheral_markers + \
               self.center_spring_lines + self.periphery_spring_lines + \
               [self.velocity_text, self.accel_text]

    def run_animation(self):
        ani = animation.FuncAnimation(
            self.fig, self.update_frame, 
            interval=50, blit=True
        )
        plt.tight_layout()
        plt.show()

if __name__ == "__main__":
    physics = SoftBodyPhysics(num_peripheral=3, influence_radius=2.0)
    visualizer = SoftBodyVisualizer(physics)
    visualizer.run_animation()
