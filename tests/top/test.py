import cocotb
from cocotb.triggers import Timer

async def step_clock(dut):
    dut.clk.value = 1
    await Timer(10, units="ns")
    dut.clk.value = 0
    await Timer(10, units="ns")
   
# helper function to extract current particle positions
async def get_positions(dut):
    dir(dut)
    physics = dut._HierarchyObject__get_sub_handle_by_name('simulator')
    return [(int(physics.cx.value) >> 4, int(physics.cy.value) >> 4),
            (int(physics.p0x.value) >> 4, int(physics.p0y.value) >> 4),
            (int(physics.p1x.value) >> 4, int(physics.p1y.value) >> 4),
            (int(physics.p2x.value) >> 4, int(physics.p2y.value) >> 4)]

# test if initial matrix pattern is observed
@cocotb.test()
async def init_test(dut):
    # reset
    dut.rst_n.value = 0
    await step_clock(dut)
    dut.rst_n.value = 1

    # wait a bit with no inputs
    for _ in range(11_000):
        await step_clock(dut)

    points = [(8, 8), (6, 10), (8, 6), (10, 10)]
    print(f"Points: {points}")
    print(f"Actual points: {await get_positions(dut)}")

    matrix_str = str(dut.matrix.value)
    passed = True
    for i in range(16):
        for j, v in enumerate(matrix_str[i*16:i*16+16]):
            if any(((x - j) ** 2 + (y - i) ** 2) ** 0.5 <= 2 for x, y in points):
                if (int(v) != 1):
                    print(f"mismatch at point ({i}, {j}) expected 1, got {v}")
                    passed = False
            else:
                if (int(v) != 0):
                    print(f"mismatch at point ({i}, {j}) expected 0, got {v}")
                    passed = False
    assert passed
   

# 0000000000000000
# 0000000000000000
# 0000000000000000
# 0000000011100000
# 0000000111110000
# 0000001111110000
# 0000011111110000
# 0000011111100000
# 0000011111000000
# 0000011111000000
# 0000011111000000
# 0000001110000000
# 0000000000000000
# 0000000000000000
# 0000000000000000
# 0000000000000000

