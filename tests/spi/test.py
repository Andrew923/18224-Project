import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, First
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
@cocotb.test()
async def simple_spi_test(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    # reset
    await FallingEdge(dut.clk)
    dut.reset.value = 1
    await FallingEdge(dut.clk)
    dut.reset.value = 0

    # config
    dut.addr.value = 0x2A
    dut.read.value = 1
    dut.enable.value = 1

    await FallingEdge(dut.CS)

    # RW bit
    await RisingEdge(dut.SPC)
    if dut.SDI.value != 1:
        assert False, "SDI should be 1 for read"

    # Addr bits
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 0
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 1
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 0
    
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 1
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 0
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 1
    await RisingEdge(dut.SPC)
    assert dut.SDI.value == 0

    # Data bits
    await FallingEdge(dut.SPC)
    dut.SDO.value = 1
    await FallingEdge(dut.SPC)
    dut.SDO.value = 0
    await FallingEdge(dut.SPC)
    dut.SDO.value = 1
    await FallingEdge(dut.SPC)
    dut.SDO.value = 0

    await FallingEdge(dut.SPC)
    dut.SDO.value = 0
    await FallingEdge(dut.SPC)
    dut.SDO.value = 1
    await FallingEdge(dut.SPC)
    dut.SDO.value = 1
    await FallingEdge(dut.SPC)
    dut.SDO.value = 0

    # read data
    # print(dut.rdata.value)
    await RisingEdge(dut.done)
    assert int(dut.rdata.value) == 0xA6
   
