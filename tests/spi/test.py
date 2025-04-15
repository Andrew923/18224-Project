import cocotb
from cocotb.triggers import Timer

async def step_clock(dut):
    dut.clk.value = 1
    await Timer(10, units="ns")
    dut.clk.value = 0
    await Timer(10, units="ns")
   
# just for generating dump.vcd to look at
# @cocotb.test()
# async def waveform_test(dut):
#     # reset
#     dut.reset.value = 1
#     await step_clock(dut)
#     dut.reset.value = 0
#     for _ in range(256):
#         await step_clock(dut)


# spi test
# @cocotb.test()
# async def 
   
