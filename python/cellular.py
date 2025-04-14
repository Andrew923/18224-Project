import numpy as np
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib.figure import Figure
from matplotlib import colors
import matplotlib.patches as patches

class ParticlePhysics:
    """Physics engine for particle simulation using Margolus neighborhoods."""
    
    def __init__(self, width=10, height=6, damping=0.9):
        self.width = width
        self.height = height
        self.damping = damping
        
        # Initialize grid and particle properties
        self.occupied = np.zeros((height, width), dtype=bool)
        self.velocity_x = np.zeros((height, width), dtype=float)
        self.velocity_y = np.zeros((height, width), dtype=float)
        
        # Force direction (default: gravity pointing down)
        self.force_x = 0.0
        self.force_y = 0.1
        
        # Add some initial particles for testing
        self.add_particle(2, 2, 0.1, 0.0)  # Particle 1: moving right
        self.add_particle(7, 3, -0.1, 0.0)  # Particle 2: moving left
    
    def add_particle(self, x, y, vx=0.0, vy=0.0):
        """Add a particle at position (x, y) with velocity (vx, vy)."""
        if 0 <= x < self.width and 0 <= y < self.height and not self.occupied[y, x]:
            self.occupied[y, x] = True
            self.velocity_x[y, x] = vx
            self.velocity_y[y, x] = vy
    
    def update(self):
        """Update the state of the simulation by one time step."""
        # Apply forces (acceleration) to velocities
        indices = np.where(self.occupied)
        friction = 0.95
        for y, x in zip(indices[0], indices[1]):
            self.velocity_x[y, x] = (self.velocity_x[y, x] + self.force_x) * friction
            self.velocity_y[y, x] = (self.velocity_y[y, x] + self.force_y) * friction
        
        # Create new grids for the updated state
        new_occupied = np.zeros_like(self.occupied)
        new_velocity_x = np.zeros_like(self.velocity_x)
        new_velocity_y = np.zeros_like(self.velocity_y)
        
        # Compute intended next positions for all particles
        intended_positions = {}
        indices = np.where(self.occupied)
        for y, x in zip(indices[0], indices[1]):
            vx = self.velocity_x[y, x]
            vy = self.velocity_y[y, x]
            
            # Calculate new position
            new_x = x + vx
            new_y = y + vy
            
            # Apply boundary conditions
            new_x = max(0, min(self.width - 1, new_x))
            new_y = max(0, min(self.height - 1, new_y))
            
            # Integer positions for grid
            new_x_int = int(new_x)
            new_y_int = int(new_y)
            
            # Track intended positions for collision detection
            if (new_y_int, new_x_int) not in intended_positions:
                intended_positions[(new_y_int, new_x_int)] = []
            intended_positions[(new_y_int, new_x_int)].append((y, x, vx, vy))
        
        # Process Margolus neighborhoods (2x2 blocks)
        # We'll offset the starting point in each step for proper coverage
        offset_x = getattr(self, 'margolus_offset_x', 0)
        offset_y = getattr(self, 'margolus_offset_y', 0)        

        # Toggle offsets for next update
        self.margolus_offset_x = 1 - offset_x
        self.margolus_offset_y = 1 - offset_y        

        # Process each 2x2 Margolus neighborhood
        for y_block in range(offset_y, self.height-1, 2):
            for x_block in range(offset_x, self.width-1, 2):
                # Define the 2x2 block
                block_cells = [
                    (y_block, x_block),
                    (y_block, x_block+1),
                    (y_block+1, x_block),
                    (y_block+1, x_block+1)
                ]
                
                # Collect all particles and their intended destinations within this block
                block_particles = []
                for cell in block_cells:
                    if cell in intended_positions:
                        block_particles.extend(intended_positions[cell])
                
                # Apply block cellular automaton rules based on pattern
                self._apply_margolus_rules(block_particles, block_cells, new_occupied, 
                                          new_velocity_x, new_velocity_y)
        
        # Handle particles that fall outside blocks (boundary particles)
        all_handled_cells = set()
        for y_block in range(offset_y, self.height-1, 2):
            for x_block in range(offset_x, self.width-1, 2):
                for y in range(y_block, y_block+2):
                    for x in range(x_block, x_block+2):
                        all_handled_cells.add((y, x))
        
        # Process particles that weren't handled in Margolus blocks
        for pos, particles in intended_positions.items():
            if pos not in all_handled_cells:
                if len(particles) == 1:
                    # Single particle - just move it
                    y, x, vx, vy = particles[0]
                    new_y, new_x = pos
                    
                    # Check boundary collisions
                    if new_x == 0 or new_x == self.width - 1:
                        vx = -vx * self.damping  # Bounce and dampen
                    if new_y == 0 or new_y == self.height - 1:
                        vy = -vy * self.damping  # Bounce and dampen
                    
                    new_occupied[new_y, new_x] = True
                    new_velocity_x[new_y, new_x] = vx
                    new_velocity_y[new_y, new_x] = vy
                else:
                    # Collision outside block - use simplified rule
                    for y, x, vx, vy in particles:
                        # Reverse velocities
                        vx = -vx * self.damping
                        vy = -vy * self.damping
                        
                        # Particles stay in place
                        new_occupied[y, x] = True
                        new_velocity_x[y, x] = vx
                        new_velocity_y[y, x] = vy
        
        # Update the grid with the new state
        self.occupied = new_occupied
        self.velocity_x = new_velocity_x
        self.velocity_y = new_velocity_y
    
    def _apply_margolus_rules(self, particles, block_cells, new_occupied, new_velocity_x, new_velocity_y):
        """Apply collision rules based on Margolus neighborhood patterns."""
        # The heart of the block cellular automaton approach
        # This function is designed as a lookup table that can be translated to hardware
        
        # Count particles in this neighborhood
        particle_count = len(particles)
        
        # No particles case
        if particle_count == 0:
            return
        
        # Single particle case - no collision, just move
        if particle_count == 1:
            y, x, vx, vy = particles[0]
            new_y, new_x = int(y + vy), int(x + vx)
            
            # Check boundaries
            if new_x < 0:
                new_x = 0
                vx = -vx * self.damping
            elif new_x >= self.width:
                new_x = self.width - 1
                vx = -vx * self.damping
            
            if new_y < 0:
                new_y = 0
                vy = -vy * self.damping
            elif new_y >= self.height:
                new_y = self.height - 1
                vy = -vy * self.damping
            
            new_occupied[new_y, new_x] = True
            new_velocity_x[new_y, new_x] = vx
            new_velocity_y[new_y, new_x] = vy
            return
        
        # Multiple particles - process based on pattern
        if particle_count == 2:
            # Extract the two particles
            y1, x1, vx1, vy1 = particles[0]
            y2, x2, vx2, vy2 = particles[1]
            
            # Calculate intended positions
            new_y1, new_x1 = int(y1 + vy1), int(x1 + vx1)
            new_y2, new_x2 = int(y2 + vy2), int(x2 + vx2)
            
            # Check if they want to move to the same cell (direct collision)
            if (new_y1, new_x1) == (new_y2, new_x2):
                # Head-on collision - reverse both velocities
                vx1, vy1 = -vx1 * self.damping, -vy1 * self.damping
                vx2, vy2 = -vx2 * self.damping, -vy2 * self.damping
                
                # Stay in original positions
                new_occupied[y1, x1] = True
                new_velocity_x[y1, x1] = vx1
                new_velocity_y[y1, x1] = vy1
                
                new_occupied[y2, x2] = True
                new_velocity_x[y2, x2] = vx2
                new_velocity_y[y2, x2] = vy2
            else:
                # Check if they're trying to swap positions (crossing paths)
                if (new_y1, new_x1) == (y2, x2) and (new_y2, new_x2) == (y1, x1):
                    # Particles are crossing - exchange velocities (elastic collision)
                    vx1, vx2 = vx2 * self.damping, vx1 * self.damping
                    vy1, vy2 = vy2 * self.damping, vy1 * self.damping
                    
                    # Stay in original positions
                    new_occupied[y1, x1] = True
                    new_velocity_x[y1, x1] = vx1
                    new_velocity_y[y1, x1] = vy1
                    
                    new_occupied[y2, x2] = True
                    new_velocity_x[y2, x2] = vx2
                    new_velocity_y[y2, x2] = vy2
                else:
                    # No direct collision, check if destinations are still inside the block
                    in_block1 = (new_y1, new_x1) in block_cells
                    in_block2 = (new_y2, new_x2) in block_cells
                    
                    # Apply boundary conditions if needed
                    if not in_block1:
                        new_y1 = max(0, min(self.height - 1, new_y1))
                        new_x1 = max(0, min(self.width - 1, new_x1))
                        
                        # Check if hitting boundaries
                        if new_x1 == 0 or new_x1 == self.width - 1:
                            vx1 = -vx1 * self.damping
                        if new_y1 == 0 or new_y1 == self.height - 1:
                            vy1 = -vy1 * self.damping
                    
                    if not in_block2:
                        new_y2 = max(0, min(self.height - 1, new_y2))
                        new_x2 = max(0, min(self.width - 1, new_x2))
                        
                        # Check if hitting boundaries
                        if new_x2 == 0 or new_x2 == self.width - 1:
                            vx2 = -vx2 * self.damping
                        if new_y2 == 0 or new_y2 == self.height - 1:
                            vy2 = -vy2 * self.damping
                    
                    # Move particles
                    new_occupied[new_y1, new_x1] = True
                    new_velocity_x[new_y1, new_x1] = vx1
                    new_velocity_y[new_y1, new_x1] = vy1
                    
                    new_occupied[new_y2, new_x2] = True
                    new_velocity_x[new_y2, new_x2] = vx2
                    new_velocity_y[new_y2, new_x2] = vy2
        
        elif particle_count == 3:
            # Three particles case - more complex interaction
            # For simplicity, we'll just have all particles reverse direction with damping
            for y, x, vx, vy in particles:
                new_occupied[y, x] = True
                new_velocity_x[y, x] = -vx * self.damping
                new_velocity_y[y, x] = -vy * self.damping
        
        elif particle_count == 4:
            # Four particles in a 2x2 block - all reverse with higher damping
            # This is the maximum density case
            higher_damping = self.damping * 0.8  # Extra damping for high density
            for y, x, vx, vy in particles:
                new_occupied[y, x] = True
                new_velocity_x[y, x] = -vx * higher_damping
                new_velocity_y[y, x] = -vy * higher_damping
    
    def set_force(self, fx, fy):
        """Set the force vector (acceleration) applied to all particles."""
        self.force_x = fx
        self.force_y = fy


class ParticleSimulator:
    """Visualization and control interface for the particle physics simulation."""
    
    def __init__(self, physics=None):
        self.physics = physics if physics else ParticlePhysics()
        
        # Create the figure and grid for visualization
        self.fig, self.ax = plt.subplots(figsize=(10, 6))
        self.ax.set_xlim(0, self.physics.width)
        self.ax.set_ylim(0, self.physics.height)
        self.ax.grid(True)
        
        # Create a mesh grid for the particles
        self.grid = np.zeros((self.physics.height, self.physics.width))
        self.img = self.ax.imshow(self.grid, cmap='Blues', 
                                 extent=[0, self.physics.width, 0, self.physics.height],
                                 vmin=0, vmax=1, origin='lower')
        
        # Dictionary to store text annotations for particles
        self.particle_texts = {}
        
        # Display current force as text
        self.force_text = self.ax.text(0.5, self.physics.height + 0.5, 
                                      f"Force: ({self.physics.force_x:.2f}, {self.physics.force_y:.2f})",
                                      ha='center')
        
        # Set up keyboard event handling
        self.fig.canvas.mpl_connect('key_press_event', self.on_key_press)
        
        # Set up the animation
        self.ani = animation.FuncAnimation(
            self.fig, self.update, interval=100, blit=False)
        
    def update(self, frame):
        """Update the visualization for each animation frame."""
        # First update the physics
        self.physics.update()
        
        # Update the grid based on occupied cells
        self.grid = self.physics.occupied.astype(float)
        self.img.set_array(self.grid)
        
        # Remove all existing text annotations
        for text in self.particle_texts.values():
            text.remove()
        self.particle_texts.clear()
        
        # Add text annotations for each particle
        indices = np.where(self.physics.occupied)
        for y, x in zip(indices[0], indices[1]):
            vx = self.physics.velocity_x[y, x]
            vy = self.physics.velocity_y[y, x]
            
            # Create text showing velocity
            text = self.ax.text(x + 0.5, y + 0.5, 
                               f"v:({vx:.2f},{vy:.2f})", 
                               ha='center', va='center', 
                               color='white', fontsize=8)
            
            self.particle_texts[(y, x)] = text
        
        # Update force text
        self.force_text.set_text(f"Force: ({self.physics.force_x:.2f}, {self.physics.force_y:.2f})")
        
        return self.img,
    
    def on_key_press(self, event):
        """Handle keyboard input to change force direction."""
        force_delta = 0.05
        
        if event.key == 'up':
            self.physics.set_force(self.physics.force_x, self.physics.force_y + force_delta)
        elif event.key == 'down':
            self.physics.set_force(self.physics.force_x, self.physics.force_y - force_delta)
        elif event.key == 'left':
            self.physics.set_force(self.physics.force_x - force_delta, self.physics.force_y)
        elif event.key == 'right':
            self.physics.set_force(self.physics.force_x + force_delta, self.physics.force_y)
        elif event.key == 'space':
            self.physics.set_force(0, 0)  # Reset force to zero
        
    def run(self):
        """Start the simulation."""
        plt.title("Particle Physics Simulator - Use arrow keys to change force direction")
        plt.show()


if __name__ == "__main__":
    # Create the physics engine
    physics = ParticlePhysics(width=10, height=6, damping=0.9)
    
    # Create and run the simulator
    simulator = ParticleSimulator(physics)
    simulator.run()
