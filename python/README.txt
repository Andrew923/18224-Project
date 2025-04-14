Overview:
This folder has a bunch of Python scripts for simulating
different kinds of particle physics ideas. Note that
everything in this folder is AI generated so it all kind
of sucks, but I just wanted to have a quick way to develop
and test out ideas. This README is just for summarizing
some of the ideas behind implentation ideas and problems.

Initial Implementation:
At first I just described my basic requirements for some kind
of particle physics system, but the resulting code had too complex
of collision detection logic and looked way too software-y
in general so I began brainstorming other ideas.

Cellular Automata Idea:
I thought it would make sense and be very parallelizable to
try and do some block cellular automata where I did updating
logic in a small 2x2 block at a time.
Problems:
- Max velocity must be 1 because updating in blocks assumes that
a particle can only move within 2x2 blocks. This limit makes it
difficult to do anything like friction or inelastic collisions.
- Precision is hard to decide. I thought for a while about whether
I could get away with just single bit velocities, but then there
would never be any friction and with no energy loss it looks
really weird. I later realized that System Verilog actually
has floats though, so this isn't a super big worry anymore.
- Updating the edge is really weird. I have a phase that specifically
tries to update velocites for particles on the edge, but there were some
issues with collisions and sometimes particles would eat each other.

Soft Body Physics Idea:
Because most of the issues stem from collision detection, I went
back to ideation and came up with the idea of just having one fat particle.
To make this still somewhat complex and look cool, it would need to be
blobby. With soft body physics, we can tie some particles together
with spring forces.

