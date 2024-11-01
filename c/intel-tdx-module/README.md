<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2024 Dirk Beyer <dirk.beyer@sosy-lab.org>

SPDX-License-Identifier: Apache-2.0
-->

# Verification of the Intel TDX Module Firmware

This folder contains verification tasks derived from the firmware module of [Intel Trust Domain Extensions (Intel TDX)][TDX webpage].
The goal of these verification tasks is to raise the awareness of the firmware-verification problem and
assess academic tools on industrial firmware programs.

The tasks are contributed by:

- Po-Chun Chien, LMU Munich,
- Bo-Yuan Huang, Intel Corp.,
- Nian-Ze Lee, LMU Munich, and
- Thomas Lemberger, LMU Munich

All tasks were generated with our tool [HarnessForge][HarnessForge] under the following environment:

```
Ubuntu clang version 15.0.7
Target: x86_64-pc-linux-gnu
Thread model: posix
```

## Folder Structure

- `*.c`: verification tasks before preprocessing and slicing
- `*.i`: verification tasks after preprocessing and slicing
- `*.yml`: SV-COMP task-definition files

## Intel TDX

Intel TDX offers trusted execution environments to support confidential computing, e.g., in a pay-per-use cloud infrastructure.
Its security guarantees root in specialized CPU extensions and a firmware module
that protects guest virtual machines (VMs) from malicious software in the host machine (e.g., VM manager or OS).
Guest VMs and host VM manager interact through the application binary interface (ABI) of the firmware module.
Therefore, the functional correctness of the ABI is essential for the security guarantees of TDX.

The submitted verification tasks are written specifically for the benchmark,
including original assertions and pre/postcondition checks derived from the [TDX ABI specification][TDX ABI spec].

### ABI Functions Included

Each ABI function has multiple pre-postcondition contracts to meet.
We create multiple verification tasks based on the pre-postcondition contracts of the ABI function (potentially with inserted errors).
Below is the list of ABI functions included in this submission.

#### Host-Side ABI

- TDH.EXPORT.RESTORE
- TDH.IMPORT.ABORT
- TDH.MNG.ADDCX
- TDH.MNG.CREATE
- TDH.MNG.INIT
- TDH.MNG.KEY.CONFIG
- TDH.MNG.KEY.FREEID
- TDH.MNG.VPFLUSHDONE
- TDH.MR.FINALIZE
- TDH.PHYMEM.PAGE.RECLAIM
- TDH.SYS.CONFIG
- TDH.SYS.INIT
- TDH.SYS.KEY.CONFIG
- TDH.SYS.SHUTDOWN
- TDH.SYS.UPDATE
- TDH.VP.ENTER

#### Guest-Side ABI

- TDG.MR.REPORT
- TDG.SERVTD.WR
- TDG.SYS.RD
- TDG.VM.WR
- TDG.VP.VMCALL

## HarnessForge: Generation of Verification Tasks

We developed a tool called _HarnessForge_ to generate verification tasks from a multi-file code base.
The tool is available at https://gitlab.com/sosy-lab/software/harnessforge.
HarnessForge assembles the original source files according to the required build parameters,
introduces shadow C code, ghost variables, and a verification harness,
and then slices unused functions and types to reduce the size of the verification task.

To reproduce the task-generation process, please follow the [reproduction guide](./original/Reproduction.md).

### Firmware-Specific Constructs

Firmware programs closely interact with the underlying hardware and presents different challenges due to the patterns and constructs that are uncommon in user-level C programs.
For example, firmware programs are often platform-specific, employing inline assembly or memory-mapped reads/writes to access and manage the hardware.
Further, some variables appearing in a firmware program may never be defined throughout the program source code,
because they are directly allocated into the memory by the linker or loader.
Below we explain how to deal with these firmware-specific constructs when generating verification tasks for C-program verifiers.

### Overriding Inline Assembly

We replaced occurrences of inline assembly with shadow C code to model or over-approximate the behavior of the corresponding instruction sequences.
For each verification task,
the version before preprocessing (`.c` file) contains both the assembly code and shadow C code,
guarded by preprocessor directives `#ifdef TDXFV_NO_ASM`.
The preprocessed task (`.i` file) is a pure C program without the assembly code.
Note: The shadow C code was developed solely for this benchmark set.
It does not, and is not intended to, serve as a sound and complete abstraction of the underlying hardware.
The shadow C code is included in the folder [`./original/task-generation/formal/`](./original/task-generation/formal/)
and is provided as is.

### Mocking Variables Defined Externally

We mocked the variables defined outside of the firmware programs by introducing global variables.
These variables may represent firmware state, hardware state, or ghost variables introduced for the verification purpose.
As we want to verify the execution of the ABI functions starting from an arbitrary state throughout the firmware operation life-cycles,
we nondeterministically initialize these mocking variables.

In this submission, we provide two sets of verification tasks using different initialization methods:

- _Havoc memory_: initializing an object of a non-primitive type by assigning a nondeterministic value to each byte
  - Tasks defined in `./*_havoc_memory.yml`
- _Havoc object_: initializing an object of a non-primitive type by nondeterministically initializing each field of the type (if a field is a non-primitive type, recursively initialize it)
  - Tasks defined in `./*_havoc_object.yml`

### Layout of a Verification Task

We generated verification tasks based on pre-postcondition contracts of each ABI function, valid or invalid.
(Invalid postconditions are created to test the verification process and expected to fail. No errors were inserted into the TDX source code.)

The function `main()` of each verification task has the following layout:

```c
int main() {
    // Initialize firmware state, hardware state, and verification ghost variables
    initialization();
    // Assume the precondition before calling the ABI function
    tdx_ABI_precond_i();
    // Calling the ABI function
    tdx_ABI();
    // Assert the postcondition after calling the ABI function
    tdx_ABI_postcond_i();
    return 0;
}
```

[TDX webpage]: https://www.intel.com/content/www/us/en/developer/tools/trust-domain-extensions/overview.html
[TDX ABI spec]: https://cdrdv2.intel.com/v1/dl/getContent/733579
[HarnessForge]: https://gitlab.com/sosy-lab/software/harnessforge
