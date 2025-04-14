import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from enum import Enum

class Particle:
    def __init__(self, grid_x, grid_y):
        # Store grid position (integer coordinates only)
        self.grid_pos = np.array([grid_x, grid_y], dtype=np.float16)
        self.velocity = np.array([0, 0], dtype=np.float16)
        self.active = True  # Whether this cell contains a particle

    def update_velocity(self, vx, vy):
        """Set velocity, ensuring it's constrained to {-1, 0, 1} in each dimension"""
        self.velocity[0] = max(-1, min(1, vx + self.velocity[0]))
        self.velocity[1] = max(-1, min(1, vy + self.velocity[1]))

    def reverse_velocity(self, dimension):
        """Reverse velocity in the specified dimension (0 for x, 1 for y)"""
        self.velocity[dimension] = -self.velocity[dimension] * 3 / 4

    def update_position(self):
        """Calculate new grid position based on current velocity"""
        return (self.grid_pos + self.velocity).astype(int)

    def __repr__(self):
        return f"Particle({self.velocity})" if self.active else "Particle(inactive)"


class PhysicsSimulation:
    def __init__(self, width=6, height=10):
        self.width = width
        self.height = height
        
        # Simplified force directions that set velocity directly
        self.directions = {
            'up': np.array([0, 0.5]),
            'down': np.array([0, -0.5]),
            'left': np.array([-0.5, 0]),
            'right': np.array([0.5, 0]),
            'stop': np.array([0, 0])
        }
        
        self.current_direction = 'stop'
        
        # Create a 2D grid filled with particle objects
        self.grid = np.empty((width, height), dtype=object)
        for x in range(width):
            for y in range(height):
                self.grid[x, y] = Particle(x, y)
                self.grid[x, y].active = False
        
        # Initialize with a pattern of active particles
        self.reset_particles()

    def reset_particles(self):
        """Reset the grid with initial particle configuration"""
        for x in range(self.width):
            for y in range(self.height):
                self.grid[x, y] = Particle(x, y)
                self.grid[x, y].active = False
                
        # Initial particle positions
        self.grid[0, 1].active = True
        self.grid[5, 5].active = True

    def set_direction(self, direction):
        """Set the current direction of movement for all particles"""
        if direction in self.directions:
            self.current_direction = direction

    def update(self):
        """Update the simulation state using block-based updates"""
        # Apply the current direction to all active particles
        if self.current_direction != 'stop':
            for x in range(self.width):
                for y in range(self.height):
                    if self.grid[x, y].active:
                        vx, vy = self.directions[self.current_direction]
                        self.grid[x, y].update_velocity(vx, vy)
        
        # Handle edge collisions
        self.handle_edge_collisions()
        
        # Define the update phases for block-based processing
        # Each phase processes a subset of 2x2 blocks to avoid conflicts
        block_phases = [
            [(x, y) for x in range(0, self.width-1, 2) for y in range(0, self.height-1, 2)],
            [(x, y) for x in range(1, self.width-1, 2) for y in range(0, self.height-1, 2)],
            [(x, y) for x in range(0, self.width-1, 2) for y in range(1, self.height-1, 2)],
            [(x, y) for x in range(1, self.width-1, 2) for y in range(1, self.height-1, 2)]
        ]
        
        # Create a copy of the grid to store updated states
        updated_grid = np.empty((self.width, self.height), dtype=object)
        for x in range(self.width):
            for y in range(self.height):
                updated_grid[x, y] = Particle(x, y)
                updated_grid[x, y].active = self.grid[x, y].active
                if self.grid[x, y].active:
                    updated_grid[x, y].velocity = self.grid[x, y].velocity.copy()
        
        # Process each phase
        for phase in block_phases:
            for block_x, block_y in phase:
                self.update_block(block_x, block_y, updated_grid)
        
        # Swap the updated grid with the current grid
        self.grid = updated_grid
        
        # Return the current state for visualization
        state = np.zeros((self.width, self.height), dtype=bool)
        for x in range(self.width):
            for y in range(self.height):
                state[x, y] = self.grid[x, y].active
        
        return state

    def handle_edge_collisions(self):
        """Handle collisions with the edges of the grid"""
        # Left edge (x = 0)
        for y in range(self.height):
            if self.grid[0, y].active and self.grid[0, y].velocity[0] < 0:
                self.grid[0, y].reverse_velocity(0)  # Reverse x velocity
        
        # Right edge (x = width - 1)
        for y in range(self.height):
            if self.grid[self.width-1, y].active and self.grid[self.width-1, y].velocity[0] > 0:
                self.grid[self.width-1, y].reverse_velocity(0)  # Reverse x velocity
        
        # Bottom edge (y = 0)
        for x in range(self.width):
            if self.grid[x, 0].active and self.grid[x, 0].velocity[1] < 0:
                self.grid[x, 0].reverse_velocity(1)  # Reverse y velocity
        
        # Top edge (y = height - 1)
        for x in range(self.width):
            if self.grid[x, self.height-1].active and self.grid[x, self.height-1].velocity[1] > 0:
                self.grid[x, self.height-1].reverse_velocity(1)  # Reverse y velocity

    def update_block(self, block_x, block_y, updated_grid):
        """Update a 2x2 block of particles based on deterministic rules"""
        # Ensure we have a valid 2x2 block
        if block_x + 1 >= self.width or block_y + 1 >= self.height:
            return
        
        # Get the 4-bit state of the block
        top_left = self.grid[block_x, block_y + 1].active
        top_right = self.grid[block_x + 1, block_y + 1].active
        bottom_left = self.grid[block_x, block_y].active
        bottom_right = self.grid[block_x + 1, block_y].active
        
        state = (top_left << 3) | (top_right << 2) | (bottom_left << 1) | bottom_right
        
        # References to particles in the block
        tl = (block_x, block_y + 1)
        tr = (block_x + 1, block_y + 1)
        bl = (block_x, block_y)
        br = (block_x + 1, block_y)
        
        # Process each state based on deterministic rules
        if state == 0:  # 0000: No particles
            return
        
        elif state == 1:  # 0001: Only bottom-right active
            self.move_particle(br, updated_grid)
        
        elif state == 2:  # 0010: Only bottom-left active
            self.move_particle(bl, updated_grid)
        
        elif state == 4:  # 0100: Only top-right active
            self.move_particle(tr, updated_grid)
        
        elif state == 8:  # 1000: Only top-left active
            self.move_particle(tl, updated_grid)
        
        elif state == 3:  # 0011: Bottom-left and bottom-right active
            # Collision between adjacent particles
            self.handle_horizontal_collision(bl, br, updated_grid)
        
        elif state == 12:  # 1100: Top-left and top-right active
            # Collision between adjacent particles
            self.handle_horizontal_collision(tl, tr, updated_grid)
        
        elif state == 5:  # 0101: Top-right and bottom-right active
            # Collision between adjacent particles
            self.handle_vertical_collision(tr, br, updated_grid)
        
        elif state == 10:  # 1010: Top-left and bottom-left active
            # Collision between adjacent particles
            self.handle_vertical_collision(tl, bl, updated_grid)
        
        elif state == 9:  # 1001: Top-left and bottom-right active (diagonal)
            # Diagonal particles - may not interact directly
            self.move_particle(tl, updated_grid)
            self.move_particle(br, updated_grid)
            self.check_collision(tl, br, updated_grid)
        
        elif state == 6:  # 0110: Top-right and bottom-left active (diagonal)
            # Diagonal particles - may not interact directly
            self.move_particle(tr, updated_grid)
            self.move_particle(bl, updated_grid)
            self.check_collision(tr, bl, updated_grid)
        
        # Cases with 3 particles
        elif state == 7:  # 0111: All except top-left
            self.handle_three_particle_collision(bl, br, tr, updated_grid)
        
        elif state == 11:  # 1011: All except top-right
            self.handle_three_particle_collision(tl, bl, br, updated_grid)
        
        elif state == 13:  # 1101: All except bottom-left
            self.handle_three_particle_collision(tl, tr, br, updated_grid)
        
        elif state == 14:  # 1110: All except bottom-right
            self.handle_three_particle_collision(tl, tr, bl, updated_grid)
        
        # All 4 particles active
        elif state == 15:  # 1111: All particles active
            self.handle_four_particle_collision(tl, tr, bl, br, updated_grid)


    def move_particle(self, pos, updated_grid):
        """Move a single particle to its new position if possible"""
        x, y = pos
        particle = self.grid[x, y]
        
        if not particle.active:
            return
        
        # Calculate new position
        new_x, new_y = particle.update_position()
        
        # Check if new position is within grid bounds
        if 0 <= new_x < self.width and 0 <= new_y < self.height:
            # Check if destination is empty
            if not self.grid[new_x, new_y].active:
                # Move particle to new position in updated grid
                updated_grid[new_x, new_y].active = True
                updated_grid[new_x, new_y].velocity = particle.velocity.copy()
                updated_grid[x, y].active = False
            else:
                # Destination occupied, handle collision
                self.handle_collision_with_stationary(pos, (new_x, new_y), updated_grid)
        else:
            # Hitting grid boundary
            updated_grid[x, y].active = True
            updated_grid[x, y].velocity = particle.velocity.copy()
            # Reverse direction if hitting a boundary
            if new_x < 0 or new_x >= self.width:
                updated_grid[x, y].reverse_velocity(0)
            if new_y < 0 or new_y >= self.height:
                updated_grid[x, y].reverse_velocity(1)

    def handle_horizontal_collision(self, pos1, pos2, updated_grid):
        """Handle collision between two horizontally adjacent particles"""
        x1, y1 = pos1
        x2, y2 = pos2
        p1 = self.grid[x1, y1]
        p2 = self.grid[x2, y2]
        
        # If particles are moving toward each other
        if p1.velocity[0] > 0 and p2.velocity[0] < 0:
            # Reverse x velocities
            updated_grid[x1, y1].velocity[0] = -p1.velocity[0]
            updated_grid[x2, y2].velocity[0] = -p2.velocity[0]
        else:
            # Otherwise just try to move them
            self.move_particle(pos1, updated_grid)
            self.move_particle(pos2, updated_grid)

    def handle_vertical_collision(self, pos1, pos2, updated_grid):
        """Handle collision between two vertically adjacent particles"""
        x1, y1 = pos1
        x2, y2 = pos2
        p1 = self.grid[x1, y1]
        p2 = self.grid[x2, y2]
        
        # If particles are moving toward each other
        if p1.velocity[1] < 0 and p2.velocity[1] > 0:
            # Reverse y velocities
            updated_grid[x1, y1].velocity[1] = -p1.velocity[1]
            updated_grid[x2, y2].velocity[1] = -p2.velocity[1]
        else:
            # Otherwise just try to move them
            self.move_particle(pos1, updated_grid)
            self.move_particle(pos2, updated_grid)

    def check_collision(self, pos1, pos2, updated_grid):
        """Check if two particles will collide after movement"""
        x1, y1 = pos1
        x2, y2 = pos2
        p1 = self.grid[x1, y1]
        p2 = self.grid[x2, y2]
        
        # Calculate new positions
        new_x1, new_y1 = p1.update_position()
        new_x2, new_y2 = p2.update_position()
        
        # Check if new positions are the same (collision)
        if new_x1 == new_x2 and new_y1 == new_y2:
            # Reverse both velocities
            updated_grid[x1, y1].velocity = -p1.velocity
            updated_grid[x2, y2].velocity = -p2.velocity
            return True
        
        return False

    def handle_collision_with_stationary(self, moving_pos, stationary_pos, updated_grid):
        """Handle collision when a moving particle hits a stationary one"""
        mx, my = moving_pos
        sx, sy = stationary_pos
        
        # Get the particles
        moving = self.grid[mx, my]
        stationary = self.grid[sx, sy]
        
        # Simple case: just reverse the moving particle's velocity
        updated_grid[mx, my].active = True
        updated_grid[mx, my].velocity = -moving.velocity.copy()

    def handle_three_particle_collision(self, pos1, pos2, pos3, updated_grid):
        """Handle collision between three particles"""
        # Simplest approach: just reverse all velocities
        x1, y1 = pos1
        x2, y2 = pos2
        x3, y3 = pos3
        
        # Reverse velocities
        updated_grid[x1, y1].velocity = -self.grid[x1, y1].velocity.copy()
        updated_grid[x2, y2].velocity = -self.grid[x2, y2].velocity.copy()
        updated_grid[x3, y3].velocity = -self.grid[x3, y3].velocity.copy()
        
        # Ensure active state
        updated_grid[x1, y1].active = True
        updated_grid[x2, y2].active = True
        updated_grid[x3, y3].active = True

    def handle_four_particle_collision(self, pos1, pos2, pos3, pos4, updated_grid):
        """Handle collision between four particles"""
        # Simplest approach: just reverse all velocities
        x1, y1 = pos1
        x2, y2 = pos2
        x3, y3 = pos3
        x4, y4 = pos4
        
        # Reverse velocities
        updated_grid[x1, y1].velocity = -self.grid[x1, y1].velocity.copy()
        updated_grid[x2, y2].velocity = -self.grid[x2, y2].velocity.copy()
        updated_grid[x3, y3].velocity = -self.grid[x3, y3].velocity.copy()
        updated_grid[x4, y4].velocity = -self.grid[x4, y4].velocity.copy()
        
        # Ensure active state
        updated_grid[x1, y1].active = True
        updated_grid[x2, y2].active = True
        updated_grid[x3, y3].active = True
        updated_grid[x4, y4].active = True


class LEDMatrixVisualizer:
    # The LEDMatrixVisualizer class can remain largely the same
    # Just update how it displays particle information
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
            self.fig, self.update, interval=100, blit=False)

    def on_key_press(self, event):
        """Handle key press events"""
        if event.key == 'up':
            self.simulation.set_direction('up')
        elif event.key == 'down':
            self.simulation.set_direction('down')
        elif event.key == 'left':
            self.simulation.set_direction('left')
        elif event.key == 'right':
            self.simulation.set_direction('right')
        elif event.key == ' ':  # Space key
            self.simulation.set_direction('stop')
        elif event.key == 'r':
            # Reset particles
            self.simulation.reset_particles()

    def display_particle_info(self):
        """Display velocity vectors for active particles"""
        # Clear any existing text annotations
        for text in self.ax.texts:
            text.remove()
        
        # Loop through all particles
        for x in range(self.simulation.width):
            for y in range(self.simulation.height):
                particle = self.simulation.grid[x, y]
                if particle.active:
                    # Format velocity
                    vel_text = f"{particle.velocity[0]},{particle.velocity[1]}"
                    # Add text at the particle's grid position
                    self.ax.text(x, y, vel_text, 
                                ha='center', va='center', 
                                color='white', fontsize=8)

    def update(self, frame):
        # Get updated state
        self.state = self.simulation.update()
        
        # Update the heatmap data
        self.heatmap.set_array(self.state.T)  # Transpose for proper orientation
        
        # Display velocity information
        self.display_particle_info()
        
        return self.heatmap,

    def run(self):
        plt.show()


def main():
    # Create simulation with 6x10 grid
    sim = PhysicsSimulation(width=6, height=10)
    
    # Create visualizer and run
    viz = LEDMatrixVisualizer(sim)
    viz.run()


if __name__ == "__main__":
    main()
