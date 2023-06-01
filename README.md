# RISC-V Simulator

This is a simple simulator for the RISC-V instruction set architecture. The simulator reads RISC-V assembly instructions from a file, executes them, and displays the values of registers and memory at the end of the program execution or after each instruction line.


Before running the simulator, make sure you have the following:

- C++ compiler
- C++ standard library
- Input file containing RISC-V assembly instructions (one instruction per line)

## Usage

1. Compile the simulator using the C++ compiler: g++ simulator.cpp -o simulator
2. Run the simulator: ./simulator input_file
Replace `input_file` with the path to your input file containing RISC-V assembly instructions.
3. View the output: The simulator will display the values of registers and memory at the end of the program execution or after each instruction.

## Supported Instructions

The simulator supports the following RISC-V instructions:

- `lui`
- `auipc`
- `jal`
- `jalr`
- `beq`
- `bne`
- `blt`
- `bge`
- `bltu`
- `bgeu`
- `lb`
- `lh`
- `lw`
- `sb`
- `sh`
- `sw`
- `addi`
- `slti`
- `sltiu`
- `xori`
- `ori`
- `andi`
- `slli`
- `srli`
- `srai`
- `add`
- `sub`
- `sll`
- `slt`
- `sltu`
- `xor`
- `srl`
- `sra`
- `or`
- `and`

## Limitations

The simulator has the following limitations:

- Only supports a subset of RISC-V instructions
- Does not support floating-point instruction
