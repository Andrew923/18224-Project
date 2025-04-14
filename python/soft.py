import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib.colors import LinearSegmentedColormap

class SoftBodyPhysics:
    def __init__(self, grid_size=16):
        # Configuration
        self.grid_size = grid_size
        self.num_particles = 3  # Reduced to 3 peripheral particles
        self.central_mass = 1.0
        self.peripheral_mass = 0.5
        self.spring_constant = 0.5
        self.damping = 0.3
        self.time_step = 0.2
        self.force_magnitude = 2.0  # Strength of arrow key forces
        
        # Initialize central particle - hard-coded position at center of grid
        self.central_pos = np.array([8.0, 8.0])  # Center of 16x16 grid
        self.central_vel = np.array([0.0, 0.0])
        self.central_old_pos = np.array([8.0, 8.0])
        
        # Initialize peripheral particles with hard-coded positions in a triangle
        # Particle 0 - top
        # Particle 1 - bottom left
        # Particle 2 - bottom right
        self.peripheral_pos = [
            np.array([8.0, 6.0]),  # position 0 - top
            np.array([6.0, 10.0]),  # position 1 - bottom left
            np.array([10.0, 10.0])  # position 2 - bottom right
        ]
        
        self.peripheral_vel = [
            np.array([0.0, 0.0]),
            np.array([0.0, 0.0]),
            np.array([0.0, 0.0])
        ]
        
        self.peripheral_old_pos = [
            np.array([8.0, 6.0]),
            np.array([6.0, 10.0]),
            np.array([10.0, 10.0])
        ]
        
        # Hard-coded rest lengths
        # Rest length between central and peripheral particles
        self.center_to_periphery_rest_lengths = [
            2.0,  # distance from center to top
            2.0,  # distance from center to bottom left
            2.0   # distance from center to bottom right
        ]
        
        # Rest lengths between peripheral particles (periphery-to-periphery springs)
        # [0-1, 1-2, 0-2] format
        self.periphery_to_periphery_rest_lengths = [
            4.47,  # distance from top to bottom left (approx sqrt(20))
            4.0,   # distance from bottom left to bottom right
            4.47   # distance from top to bottom right (approx sqrt(20))
        ]
        
        # External force (from IMU or keyboard)
        self.external_force = np.array([0.0, 0.0])
        
        # Current acceleration (for display)
        self.current_accel = np.array([0.0, 0.0])
    
    def apply_force(self, force_x, force_y):
        """Apply external force to the system"""
        self.external_force = np.array([force_x, force_y]) * self.force_magnitude
    
    def update(self):
        """Update the soft body physics for one time step"""
        # Apply external force to central particle
        central_accel = self.external_force / self.central_mass
        
        # Save current acceleration for display
        self.current_accel = central_accel.copy()
        
        # Save old position
        temp_pos = self.central_pos.copy()
        
        # Update central particle using Verlet integration
        self.central_pos = (2 * self.central_pos - 
                            self.central_old_pos + 
                            central_accel * self.time_step**2)
        
        self.central_old_pos = temp_pos
        
        # Calculate central velocity (for damping calculations)
        self.central_vel = (self.central_pos - self.central_old_pos) / self.time_step
        
        # ---- Update peripheral particles ----
        peripheral_forces = [np.array([0.0, 0.0]) for _ in range(self.num_particles)]
        
        # 1. Calculate forces from central particle to peripheral particles
        for i in range(self.num_particles):
            # Calculate spring force from center
            direction = self.central_pos - self.peripheral_pos[i]
            distance = np.linalg.norm(direction)
            
            if distance > 0:
                # Normalize direction
                direction = direction / distance
                
                # Calculate displacement from rest length
                displacement = distance - self.center_to_periphery_rest_lengths[i]
                
                # Calculate spring force (Hooke's law)
                force_magnitude = self.spring_constant * displacement
                
                # Calculate relative velocity for damping
                rel_vel = self.central_vel - self.peripheral_vel[i]
                damping_force = self.damping * np.dot(rel_vel, direction)
                
                # Total force
                total_force = (force_magnitude + damping_force) * direction
                
                # Add to peripheral force accumulator
                peripheral_forces[i] += total_force
        
        # 2. Calculate inter-peripheral spring forces
        # Spring between particles 0 and 1
        self._add_peripheral_spring_force(0, 1, 0, peripheral_forces)
        
        # Spring between particles 1 and 2
        self._add_peripheral_spring_force(1, 2, 1, peripheral_forces)
        
        # Spring between particles 0 and 2
        self._add_peripheral_spring_force(0, 2, 2, peripheral_forces)
        
        # 3. Update peripheral particle positions
        for i in range(self.num_particles):
            # Calculate acceleration
            accel = peripheral_forces[i] / self.peripheral_mass
            
            # Save old position
            temp_pos = self.peripheral_pos[i].copy()
            
            # Update position using Verlet integration
            self.peripheral_pos[i] = (2 * self.peripheral_pos[i] - 
                                      self.peripheral_old_pos[i] + 
                                      accel * self.time_step**2)
            
            self.peripheral_old_pos[i] = temp_pos
            
            # Update velocity (for next damping calculation)
            self.peripheral_vel[i] = ((self.peripheral_pos[i] - 
                                       self.peripheral_old_pos[i]) / 
                                      self.time_step)
        
        # Simple boundary collision
        self._handle_boundary_collision()
        
        # Reset external force after applying it
        self.external_force = np.array([0.0, 0.0])
    
    def _add_peripheral_spring_force(self, particle_i, particle_j, spring_idx, forces):
        """Calculate and add spring force between two peripheral particles"""
        direction = self.peripheral_pos[particle_i] - self.peripheral_pos[particle_j]
        distance = np.linalg.norm(direction)
        
        if distance > 0:
            # Normalize direction
            direction = direction / distance
            
            # Calculate displacement from rest length
            displacement = distance - self.periphery_to_periphery_rest_lengths[spring_idx]
            
            # Calculate spring force (Hooke's law)
            force_magnitude = self.spring_constant * displacement
            
            # Calculate relative velocity for damping
            rel_vel = self.peripheral_vel[particle_i] - self.peripheral_vel[particle_j]
            damping_force = self.damping * np.dot(rel_vel, direction)
            
            # Total force
            total_force = (force_magnitude + damping_force) * direction
            
            # Apply forces to both particles (action & reaction)
            forces[particle_i] -= total_force  # Negative because direction is i->j
            forces[particle_j] += total_force
    
    def _handle_boundary_collision(self):
        """Handle collisions with grid boundaries"""
        # Central particle boundary check
        for i in range(2):  # x and y dimensions
            if self.central_pos[i] < 0:
                self.central_pos[i] = 0
                self.central_vel[i] *= -0.5  # Bounce with energy loss
            elif self.central_pos[i] > self.grid_size - 1:
                self.central_pos[i] = self.grid_size - 1
                self.central_vel[i] *= -0.5  # Bounce with energy loss
        
        # Peripheral particles boundary check
        for i in range(self.num_particles):
            for j in range(2):  # x and y dimensions
                if self.peripheral_pos[i][j] < 0:
                    self.peripheral_pos[i][j] = 0
                    self.peripheral_vel[i][j] *= -0.5  # Bounce with energy loss
                elif self.peripheral_pos[i][j] > self.grid_size - 1:
                    self.peripheral_pos[i][j] = self.grid_size - 1
                    self.peripheral_vel[i][j] *= -0.5  # Bounce with energy loss

    def get_led_grid(self):
        """Convert particle positions to a 16x16 LED grid (hardware-friendly version)"""
        grid = np.zeros((self.grid_size, self.grid_size))
        
        # Set central particle position with intensity 1.0
        cx, cy = int(round(self.central_pos[0])), int(round(self.central_pos[1]))
        if 0 <= cx < self.grid_size and 0 <= cy < self.grid_size:
            grid[cy, cx] = 1.0
        
        # Set peripheral particles with intensity 0.7
        for pos in self.peripheral_pos:
            px, py = int(round(pos[0])), int(round(pos[1]))
            if 0 <= px < self.grid_size and 0 <= py < self.grid_size:
                grid[py, px] = 0.7
                
        # Simple surrounding glow (1-pixel radius)
        enhanced_grid = grid.copy()
        for y in range(self.grid_size):
            for x in range(self.grid_size):
                if grid[y, x] > 0:
                    # Add glow to surrounding pixels
                    for dy in [-1, 0, 1]:
                        for dx in [-1, 0, 1]:
                            ny, nx = y + dy, x + dx
                            if (0 <= ny < self.grid_size and 0 <= nx < self.grid_size and 
                                not (dx == 0 and dy == 0)):
                                enhanced_grid[ny, nx] = max(enhanced_grid[ny, nx], grid[y, x] * 0.5)
        
        return enhanced_grid


class SoftBodyVisualizer:
    def __init__(self, physics):
        self.physics = physics
        self.grid_size = physics.grid_size
        
        # Setup the figure with two subplots - one for LED grid, one for stats
        self.fig = plt.figure(figsize=(12, 6))
        
        # LED grid subplot
        self.grid_ax = self.fig.add_subplot(121)
        
        # Status info subplot
        self.stats_ax = self.fig.add_subplot(122)
        
        # Create a custom colormap (black to bright blue)
        colors = [(0, 0, 0, 1), (0.1, 0.4, 1, 1)]
        self.cmap = LinearSegmentedColormap.from_list("BlueGlow", colors)
        
        # Initial empty grid
        self.grid_data = np.zeros((self.grid_size, self.grid_size))
        
        # Create the image plot
        self.img = self.grid_ax.imshow(self.grid_data, 
                                      interpolation='nearest',
                                      cmap=self.cmap, 
                                      vmin=0, 
                                      vmax=1)
        
        # Add grid lines
        self.grid_ax.grid(True, color='gray', linestyle='-', linewidth=0.5, alpha=0.5)
        self.grid_ax.set_xticks(np.arange(-0.5, self.grid_size, 1), minor=True)
        self.grid_ax.set_yticks(np.arange(-0.5, self.grid_size, 1), minor=True)
        
        # Major grid lines
        self.grid_ax.set_xticks(np.arange(0, self.grid_size, 4))
        self.grid_ax.set_yticks(np.arange(0, self.grid_size, 4))
        
        # Set axis limits
        self.grid_ax.set_xlim(-0.5, self.grid_size - 0.5)
        self.grid_ax.set_ylim(self.grid_size - 0.5, -0.5)  # Invert y-axis for standard coordinates
        
        self.grid_ax.set_title("16x16 LED Matrix Display")
        
        # Setup for marking positions of particles
        self.central_marker = self.grid_ax.plot([], [], 'ro', markersize=10, alpha=0.7)[0]
        self.peripheral_markers = [
            self.grid_ax.plot([], [], 'go', markersize=8, alpha=0.7)[0] 
            for _ in range(physics.num_particles)
        ]
        
        # Center-to-periphery spring lines
        self.center_spring_lines = [
            self.grid_ax.plot([], [], 'g-', alpha=0.5, linewidth=1)[0]
            for _ in range(physics.num_particles)
        ]
        
        # Periphery-to-periphery spring lines (forming a triangle)
        self.periphery_spring_lines = [
            self.grid_ax.plot([], [], 'b-', alpha=0.5, linewidth=1)[0]
            for _ in range(3)  # 3 springs between peripheral particles
        ]
        
        # Setup status display
        self.stats_ax.set_axis_off()
        self.stats_ax.set_title("Physics Status")
        
        # Status text objects
        self.velocity_text = self.stats_ax.text(0.1, 0.8, "", fontsize=12)
        self.accel_text = self.stats_ax.text(0.1, 0.7, "", fontsize=12)
        self.controls_text = self.stats_ax.text(0.1, 0.5, 
                                              "Controls:\n" +
                                              "← → ↑ ↓ : Apply forces\n" +
                                              "R : Reset simulation", 
                                              fontsize=12)
        
        # Setup key press event handler
        self.fig.canvas.mpl_connect('key_press_event', self.on_key_press)
        
        # Initial visual parameters
        self.force_arrow = None
    
    def on_key_press(self, event):
        """Handle key press events"""
        if event.key == 'left':
            self.physics.apply_force(-1.0, 0.0)
        elif event.key == 'right':
            self.physics.apply_force(1.0, 0.0)
        elif event.key == 'up':
            self.physics.apply_force(0.0, -1.0)
        elif event.key == 'down':
            self.physics.apply_force(0.0, 1.0)
        elif event.key == 'r':
            # Reset the simulation
            self.__init__(SoftBodyPhysics(grid_size=self.grid_size))
    
    def update_frame(self, frame):
        """Update function for animation"""
        # Update physics
        self.physics.update()
        
        # Get LED grid from physics
        self.grid_data = self.physics.get_led_grid()
        
        # Update the image data
        self.img.set_array(self.grid_data)
        
        # Update central particle marker
        self.central_marker.set_data([self.physics.central_pos[0]], 
                                     [self.physics.central_pos[1]])
        
        # Update peripheral particles
        for i, marker in enumerate(self.peripheral_markers):
            marker.set_data([self.physics.peripheral_pos[i][0]], 
                           [self.physics.peripheral_pos[i][1]])
        
        # Update center-to-periphery spring lines
        for i, line in enumerate(self.center_spring_lines):
            line.set_data([self.physics.central_pos[0], self.physics.peripheral_pos[i][0]],
                         [self.physics.central_pos[1], self.physics.peripheral_pos[i][1]])
        
        # Update periphery-to-periphery spring lines
        # Line between particles 0 and 1
        self.periphery_spring_lines[0].set_data(
            [self.physics.peripheral_pos[0][0], self.physics.peripheral_pos[1][0]],
            [self.physics.peripheral_pos[0][1], self.physics.peripheral_pos[1][1]]
        )
        
        # Line between particles 1 and 2
        self.periphery_spring_lines[1].set_data(
            [self.physics.peripheral_pos[1][0], self.physics.peripheral_pos[2][0]],
            [self.physics.peripheral_pos[1][1], self.physics.peripheral_pos[2][1]]
        )
        
        # Line between particles 0 and 2
        self.periphery_spring_lines[2].set_data(
            [self.physics.peripheral_pos[0][0], self.physics.peripheral_pos[2][0]],
            [self.physics.peripheral_pos[0][1], self.physics.peripheral_pos[2][1]]
        )
        
        # Update status text
        vel_mag = np.linalg.norm(self.physics.central_vel)
        self.velocity_text.set_text(f"Velocity: {self.physics.central_vel[0]:.2f}, {self.physics.central_vel[1]:.2f} (mag: {vel_mag:.2f})")
        
        accel_mag = np.linalg.norm(self.physics.current_accel)
        self.accel_text.set_text(f"Acceleration: {self.physics.current_accel[0]:.2f}, {self.physics.current_accel[1]:.2f} (mag: {accel_mag:.2f})")
        
        # Remove old force arrow if it exists
        if self.force_arrow:
            self.force_arrow.remove()
            self.force_arrow = None
        
        # Draw force arrow if force is being applied
        if np.linalg.norm(self.physics.external_force) > 0:
            # Scale for visibility
            arrow_scale = 0.5
            arrow_x = self.physics.central_pos[0]
            arrow_y = self.physics.central_pos[1]
            dx = self.physics.external_force[0] * arrow_scale
            dy = self.physics.external_force[1] * arrow_scale
            
            self.force_arrow = self.grid_ax.arrow(
                arrow_x, arrow_y, dx, dy,
                head_width=0.5, head_length=0.5, fc='r', ec='r', alpha=0.7
            )
        
        return [self.img, self.central_marker] + self.peripheral_markers + self.center_spring_lines + self.periphery_spring_lines + [self.velocity_text, self.accel_text]
    
    def run_animation(self):
        """Run the animation"""
        ani = animation.FuncAnimation(
            self.fig, 
            self.update_frame, 
            frames=None,  # Run indefinitely
            interval=50,  # 50ms between frames (20 fps)
            blit=True
        )
        plt.tight_layout()
        plt.show()


# Demo usage
if __name__ == "__main__":
    # Create physics and visualization instances
    physics = SoftBodyPhysics(grid_size=16)
    visualizer = SoftBodyVisualizer(physics)
    
    # Run animation
    visualizer.run_animation()
