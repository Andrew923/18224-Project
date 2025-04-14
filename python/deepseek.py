import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

class Particle:
    def __init__(self, grid_x, grid_y):
        self.grid_pos = np.array([grid_x, grid_y], dtype=np.int16)
        self.position = np.array([float(grid_x), float(grid_y)], dtype=np.float16)
        self.velocity = np.array([0.0, 0.0])
        self.acceleration = np.array([0.0, 0.0])
        self.active = False  # Start inactive, activated by simulation

    def apply_force(self, force):
        self.acceleration += force

    def update(self, dt):
        self.velocity += self.acceleration * dt
        self.velocity *= 0.95  # Friction
        self.position += self.velocity * dt
        self.acceleration = np.array([0.0, 0.0])
        new_grid_pos = np.round(self.position).astype(int)
        return self.grid_pos, new_grid_pos

class PhysicsSimulation:
    def __init__(self, width=6, height=10):
        self.width, self.height = width, height
        self.forces = {
            'up': np.array([0, 5.0]), 'down': np.array([0, -5.0]),
            'left': np.array([-5.0, 0]), 'right': np.array([5.0, 0])
        }
        self.current_force = np.array([0.0, 0.0])
        self.dt = 0.2
        self.grid = np.empty((width, height), dtype=object)
        for x in range(width):
            for y in range(height):
                self.grid[x, y] = Particle(x, y)
        self.reset_particles()

    def reset_particles(self):
        for x in range(self.width):
            for y in range(self.height):
                self.grid[x, y].active = False
        self.grid[0, 1].active = True
        self.grid[5, 5].active = True

    def set_force(self, direction):
        self.current_force = self.forces.get(direction, np.array([0.0, 0.0]))

    def clear_force(self):
        self.current_force = np.array([0.0, 0.0])

    def is_valid_position(self, pos):
        x, y = pos
        return 0 <= x < self.width and 0 <= y < self.height

    def handle_edge_collisions(self):
        for x in range(self.width):
            for y in range(self.height):
                particle = self.grid[x, y]
                particle.position[0] = max(particle.position[0], 0.0)
                particle.position[0] = min(particle.position[0], self.width - 1)
                particle.position[1] = max(particle.position[1], 0.0)
                particle.position[1] = min(particle.position[1], self.height - 1)
                if not particle.active:
                    continue
                # Left edge
                if x == 0:
                    particle.velocity[0] = abs(particle.velocity[0])
                # Right edge
                elif x == self.width - 1:
                    particle.velocity[0] = -abs(particle.velocity[0])
                # Bottom edge
                if y == 0:
                    particle.velocity[1] = abs(particle.velocity[1])
                # Top edge
                elif y == self.height - 1:
                    particle.velocity[1] = -abs(particle.velocity[1])

    def update_block_phase(self, block_x, block_y):
        # Process each cell in the 2x2 block
        cells = [(block_x + dx, block_y + dy) for dx in [0,1] for dy in [0,1]]
        active = []
        for x, y in cells:
            if not self.is_valid_position((x, y)):
                continue
            if self.grid[x, y].active:
                active.append((x, y))
        
        # Generate 4-bit state (TL, TR, BL, BR)
        state = 0
        if (block_x, block_y) in active:
            state |= 0b1000
        if (block_x+1, block_y) in active:
            state |= 0b0100
        if (block_x, block_y+1) in active:
            state |= 0b0010
        if (block_x+1, block_y+1) in active:
            state |= 0b0001
        
        # Apply state-based logic
        if state == 0:
            return
        elif bin(state).count('1') == 1:
            # Single particle: move within block if possible
            x, y = active[0]
            particle = self.grid[x, y]
            old_pos, new_pos = particle.update(self.dt)
            if self.is_valid_position(new_pos) and (new_pos[0] in [block_x, block_x+1] and new_pos[1] in [block_y, block_y+1]):
                self.handle_movement(old_pos, new_pos)
        else:
            # Multiple particles: adjust velocities to avoid collisions
            for x, y in active:
                particle = self.grid[x, y]
                # Example logic: reverse velocities (simplified)
                particle.velocity *= -0.8

    def handle_movement(self, old_pos, new_pos):
        if not self.is_valid_position(new_pos):
            return
        src = self.grid[old_pos[0], old_pos[1]]
        dest = self.grid[new_pos[0], new_pos[1]]
        if dest.active:
            return  # Collision handled in block phase
        dest.position = src.position.copy()
        dest.velocity = src.velocity.copy()
        dest.active = True
        src.active = False

    def update(self):
        # Apply global forces
        if np.any(self.current_force != 0):
            for x in range(self.width):
                for y in range(self.height):
                    if self.grid[x, y].active:
                        self.grid[x, y].apply_force(self.current_force)
        
        phases = [
            [(0, 0), (0, 2), (0, 4), (0, 6), (0, 8), (2, 0), (2, 2), (2, 4), (2, 6), (2, 8), (4, 0), (4, 2), (4, 4), (4, 6), (4, 8)],
            [(1, 0), (1, 2), (1, 4), (1, 6), (1, 8), (3, 0), (3, 2), (3, 4), (3, 6), (3, 8), (5, 0), (5, 2), (5, 4), (5, 6), (5, 8)],
            [(0, 1), (0, 3), (0, 5), (0, 7), (0, 9), (2, 1), (2, 3), (2, 5), (2, 7), (4, 1), (4, 3), (4, 5), (4, 7)],
            [(1, 1), (1, 3), (1, 5), (1, 7), (1, 9), (3, 1), (3, 3), (3, 5), (3, 7), (5, 1), (5, 3), (5, 5), (5, 7)]
        ]
        for phase in phases:
            for block in phase:
                self.update_block_phase(block[0], block[1])
        
        self.handle_edge_collisions()

        # Return current state
        return np.array([[self.grid[x,y].active for y in range(self.height)] for x in range(self.width)])


class LEDMatrixVisualizer:
    def __init__(self, simulation):
        self.simulation = simulation
        
        # Setup figure and axes
        self.fig, self.ax = plt.subplots(figsize=(8, 12))
        
        # Aspect ratio to match the 6x10 grid
        self.ax.set_aspect('equal')
        self.ax.set_xlim(-0.5, simulation.width - 0.5)
        self.ax.set_ylim(-0.5, simulation.height - 0.5)
        
        # Create initial empty heatmap
        self.state = np.zeros((simulation.width, simulation.height))
        self.heatmap = self.ax.imshow(
            self.state.T,  # Transpose for proper orientation
            cmap='Blues',
            interpolation='nearest',
            vmin=0,
            vmax=1,
            origin='lower'
        )
        
        # Add grid lines
        self.ax.grid(which='major', color='black', linestyle='-', linewidth=1)
        self.ax.set_xticks(np.arange(-0.5, simulation.width, 1))
        self.ax.set_yticks(np.arange(-0.5, simulation.height, 1))
        self.ax.set_xticklabels([])
        self.ax.set_yticklabels([])
        
        # Set up key press event handlers
        self.fig.canvas.mpl_connect('key_press_event', self.on_key_press)
        
        # Animation
        self.animation = FuncAnimation(
            self.fig, self.update, interval=50, blit=False)

    def on_key_press(self, event):
        """Handle key press events"""
        if event.key == 'up':
            self.simulation.set_force('up')
        elif event.key == 'down':
            self.simulation.set_force('down')
        elif event.key == 'left':
            self.simulation.set_force('left')
        elif event.key == 'right':
            self.simulation.set_force('right')
        elif event.key == 'r':
            # Reset particles
            self.simulation.reset_particles()

    def display_particle_positions(self):
        """Display the position of all active particles"""
        # Clear any existing text annotations
        for text in self.ax.texts:
            text.remove()
    
        # Loop through all particles
        for x in range(self.simulation.width):
            for y in range(self.simulation.height):
                particle = self.simulation.grid[x, y]
                if particle.active:
                    # Format position with one decimal place
                    pos_text = f"{particle.position[0]:.1f},{particle.position[1]:.1f}"
                    # Add text at the particle's grid position
                    self.ax.text(x, y, pos_text, 
                                ha='center', va='center', 
                                color='white', fontsize=8)

    def update(self, frame):
        # Get updated state
        self.state = self.simulation.update()
        
        # Update the heatmap data
        self.heatmap.set_array(self.state.T)  # Transpose for proper orientation

        self.display_particle_positions()
        
        return self.heatmap,

    def run(self):
        plt.show()

def main():
    sim = PhysicsSimulation()
    viz = LEDMatrixVisualizer(sim)
    viz.run()

if __name__ == "__main__":
    main()
