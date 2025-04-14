import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

class Particle:
    def __init__(self, grid_x, grid_y):
        # Store grid position (integer coordinates)
        self.grid_pos = np.array([grid_x, grid_y], dtype=np.int16)
        # Store floating point position for smoother movement
        self.position = np.array([float(grid_x), float(grid_y)], dtype=np.float16)
        self.velocity = np.array([0.0, 0.0])
        self.acceleration = np.array([0.0, 0.0])
        self.active = True  # Whether this cell contains a particle

    def apply_force(self, force):
        self.acceleration += force

    def update(self, dt):
        # Update velocity using acceleration
        self.velocity += self.acceleration * dt

        # friction
        self.velocity *= 0.95
        
        # Update floating point position
        self.position += self.velocity * dt
        
        # Reset acceleration for next frame
        self.acceleration = np.array([0.0, 0.0])
        
        # Calculate new grid position
        new_grid_pos = np.round(self.position).astype(int)
        
        # Return both current and intended grid position
        return self.grid_pos, new_grid_pos


class PhysicsSimulation:
    def __init__(self, width=6, height=10):
        self.width = width
        self.height = height
        self.forces = {
            'up': np.array([0, 5.0]),
            'down': np.array([0, -5.0]),
            'left': np.array([-5.0, 0]),
            'right': np.array([5.0, 0])
        }
        self.dt = 0.2  # Time step
        self.current_force = np.array([0.0, 0.0])  # Current force being applied
        
        # Create a 2D grid filled with particle objects
        self.grid = np.empty((width, height), dtype=object)
        
        for x in range(width):
            for y in range(height):
                # Initialize each position with a particle
                self.grid[x, y] = Particle(x, y)
        
        # Initialize with a pattern of active particles
        self.reset_particles()

    def reset_particles(self):
        # Set some particles as active in an interesting pattern
        for x in range(self.width):
            for y in range(self.height):
                # Only activate some particles (e.g., checkerboard or specific pattern)
                self.grid[x, y].active = False
        self.grid[0, 1].active = True
        self.grid[5, 5].active = True

    def set_force(self, direction):
        """Apply a force in the specified direction"""
        if direction in self.forces:
            self.current_force = self.forces[direction]
        else:
            self.current_force = np.array([0.0, 0.0])
    
    def clear_force(self):
        """Clear the current force"""
        self.current_force = np.array([0.0, 0.0])

    def is_valid_position(self, pos):
        x, y = pos
        return 0 <= x < self.width and 0 <= y < self.height

    def handle_collision(self, pos1, pos2):
        """Handle collision between two particles using simple directional logic"""
        p1 = self.grid[pos1[0], pos1[1]]
        p2 = self.grid[pos2[0], pos2[1]]
    
        # Get the direction of movement (which way p1 is trying to move)
        dx = pos2[0] - pos1[0]  # -1, 0, or 1
        dy = pos2[1] - pos1[1]  # -1, 0, or 1
    
        # Simple velocity exchange based on direction
        if dx == 1 and dy == 0:  # p1 moving right
            # Exchange x velocities (with dampening)
            vx1, vx2 = p1.velocity[0], p2.velocity[0]
            p1.velocity[0] = -vx1 * 0.8
            p2.velocity[0] = vx1 * 0.8
        
        elif dx == -1 and dy == 0:  # p1 moving left
            # Exchange x velocities (with dampening)
            vx1, vx2 = p1.velocity[0], p2.velocity[0]
            p1.velocity[0] = -vx1 * 0.8
            p2.velocity[0] = vx1 * 0.8
        
        elif dx == 0 and dy == 1:  # p1 moving up
            # Exchange y velocities (with dampening)
            vy1, vy2 = p1.velocity[1], p2.velocity[1]
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[1] = vy1 * 0.8
        
        elif dx == 0 and dy == -1:  # p1 moving down
            # Exchange y velocities (with dampening)
            vy1, vy2 = p1.velocity[1], p2.velocity[1]
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[1] = vy1 * 0.8
        
        # Diagonal cases
        elif dx == 1 and dy == 1:  # p1 moving up-right
            # Exchange velocities in both directions
            vx1, vy1 = p1.velocity[0], p1.velocity[1]
            p1.velocity[0] = -vx1 * 0.8
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[0] = vx1 * 0.8
            p2.velocity[1] = vy1 * 0.8
        
        elif dx == 1 and dy == -1:  # p1 moving down-right
            vx1, vy1 = p1.velocity[0], p1.velocity[1]
            p1.velocity[0] = -vx1 * 0.8
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[0] = vx1 * 0.8
            p2.velocity[1] = vy1 * 0.8
        
        elif dx == -1 and dy == 1:  # p1 moving up-left
            vx1, vy1 = p1.velocity[0], p1.velocity[1]
            p1.velocity[0] = -vx1 * 0.8
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[0] = vx1 * 0.8
            p2.velocity[1] = vy1 * 0.8
        
        elif dx == -1 and dy == -1:  # p1 moving down-left
            vx1, vy1 = p1.velocity[0], p1.velocity[1]
            p1.velocity[0] = -vx1 * 0.8
            p1.velocity[1] = -vy1 * 0.8
            p2.velocity[0] = vx1 * 0.8
            p2.velocity[1] = vy1 * 0.8
    
        # Reset positions to avoid out-of-bounds errors
        # p1.position = np.array([float(pos1[0]), float(pos1[1])])
        # p2.position = np.array([float(pos2[0]), float(pos2[1])])
        print("Collision:")
        print("p1", p1.position, self.is_valid_position(p1.position))
        print("p2", p2.position, self.is_valid_position(p2.position))

    def update(self):
        # Apply the current force to all active particles
        if np.any(self.current_force != 0):
            for x in range(self.width):
                for y in range(self.height):
                    if self.grid[x, y].active:
                        self.grid[x, y].apply_force(self.current_force)

        # Define the 4 update phases (top-left coordinates of 2x2 blocks)
        phases = [
            [(0, 0), (0, 2), (0, 4), (0, 6), (0, 8), (2, 0), (2, 2), (2, 4), (2, 6), (2, 8), (4, 0), (4, 2), (4, 4), (4, 6), (4, 8)],
            [(1, 0), (1, 2), (1, 4), (1, 6), (1, 8), (3, 0), (3, 2), (3, 4), (3, 6), (3, 8), (5, 0), (5, 2), (5, 4), (5, 6), (5, 8)],
            [(0, 1), (0, 3), (0, 5), (0, 7), (0, 9), (2, 1), (2, 3), (2, 5), (2, 7), (4, 1), (4, 3), (4, 5), (4, 7)],
            [(1, 1), (1, 3), (1, 5), (1, 7), (1, 9), (3, 1), (3, 3), (3, 5), (3, 7), (5, 1), (5, 3), (5, 5), (5, 7)]
        ]

        # Process each phase
        for phase_blocks in phases:
            # Process each 2x2 block in this phase
            for block_x, block_y in phase_blocks:
                self.update_block(block_x, block_y)

        # Return the current state for visualization
        state = np.zeros((self.width, self.height), dtype=bool)
        for x in range(self.width):
            for y in range(self.height):
                state[x, y] = self.grid[x, y].active

        return state

    def update_block(self, block_x, block_y):
        """Update a 2x2 block of particles"""
        # Process each cell in the 2x2 block
        for dx in range(2):
            for dy in range(2):
                x, y = block_x + dx, block_y + dy
        
                # Skip if out of bounds
                if not (0 <= x < self.width and 0 <= y < self.height):
                    continue
            
                # Skip if not active
                if not self.grid[x, y].active:
                    continue
            
                # Update this particle
                old_pos, new_pos = self.grid[x, y].update(self.dt)
        
                # If the particle wants to move
                if not np.array_equal(old_pos, new_pos):
                    # Handle the movement (with collisions)
                    self.handle_movement(old_pos, new_pos)
            
    def handle_movement(self, old_pos, new_pos):
        """Handle particle movement including collisions"""
        # Check if the new position is within bounds
        if not self.is_valid_position(new_pos):
            # Bounce off the wall
            particle = self.grid[old_pos[0], old_pos[1]]
    
            # Handle X boundary
            if new_pos[0] < 0:
                particle.position[0] = 0
                particle.velocity[0] *= -0.8
            elif new_pos[0] >= self.width:
                particle.position[0] = self.width - 0.01
                particle.velocity[0] *= -0.8
    
            # Handle Y boundary
            if new_pos[1] < 0:
                particle.position[1] = 0
                particle.velocity[1] *= -0.8
            elif new_pos[1] >= self.height:
                particle.position[1] = self.height - 0.01
                particle.velocity[1] *= -0.8
    
            particle.grid_pos = np.round(particle.position).astype(int)
            return

        # If new position has an active particle, handle collision
        if self.grid[new_pos[0], new_pos[1]].active:
            self.handle_collision(old_pos, new_pos)
            return

        # Move the particle if destination is empty
        src_particle = self.grid[old_pos[0], old_pos[1]]
        dest_particle = self.grid[new_pos[0], new_pos[1]]

        # Transfer state to new position
        dest_particle.velocity = src_particle.velocity.copy()
        dest_particle.position = src_particle.position.copy()
        dest_particle.active = True
        dest_particle.grid_pos = new_pos

        # Clear old position
        src_particle.active = False
        src_particle.velocity = np.array([0.0, 0.0])
        


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
    # Create simulation with 6x10 grid to match LED matrix
    sim = PhysicsSimulation(width=6, height=10)
    
    # Create visualizer and run
    viz = LEDMatrixVisualizer(sim)
    viz.run()


if __name__ == "__main__":
    main()
