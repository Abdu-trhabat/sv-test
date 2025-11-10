<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2025 Dirk Beyer <dirk.beyer@sosy-lab.org>

SPDX-License-Identifier: Apache-2.0
-->

# Verification Tasks on Coreutils v9.5

This folder contains verification tasks derived from [coreutils v9.5](https://github.com/coreutils/coreutils/tree/v9.5)
through manually written verification harnesses
(similar to unit testing) that call the code of coreutils.

The tasks are contributed by Thomas Lemberger, LMU Munich.
Original code is copyrighted by different parties and licensed under GPL.

The tasks were generated with our tool [HarnessForge](https://gitlab.com/sosy-lab/software/harnessforge) under the following environment:

```
Ubuntu clang version 15.0.7
Target: x86_64-pc-linux-gnu
Thread model: posix
```

## Folder Structure

- `*.c`: verification tasks before preprocessing and slicing
- `*.i`: verification tasks after preprocessing and slicing
- `*.yml`: SV-COMP task-definition files
- `original/formal` with multiple sub-folders:
    - sub-directory `configs` contains task-configuration files that tell
    HarnessForge how to assemble the verification tasks.
    - `harnesses` and `includes` contain the verification-harness source code
    - `overrides` includes overrides of original source code (see below)
    - `project-config.yaml` is a configuration file for HarnessForge

## Details

The tasks use as much unmodified code from coreutils as possible.
We only override (a) functions that are irrelevant to verification
and produce a lot of bloat (see below), and
(b) functions that use inline assembly.

The verification tasks are picked manually, to cover functional units
of code included in coreutils.
At the time of writing, we include verification tasks in three variants:

1. _Functionality_ tasks check postconditions on the code under verification.
2. _Cover-target_ tasks include a call to reach-error after the code under verification was called. This checks whether verifiers can pass through the code successfully.
3. _Cover-proof_ tasks include a call to reach-error after the post-condition checks. This checks whether verifiers can pass through the code and the post-condition checks successfully.

### Overrides of Original Source Code

Coreutils includes gnulibc as a submodule, and HarnessForge
will pick up these files when assembling single-file verification tasks.
To avoid a bulk of irrelevant code, we override functions in `formal/overrides/` that are not relevant for the code under verification.

At the time of writing, the only override is for the error-handling function `error` in `lib/error.c`.  We define it to just exit the program.
This removes multiple thousand lines of code that formatting and printing of error messages would have required.

In addition, we override source-code files that contain inline assembly
and model the assembly with C code.

## Reproduction

To regenerate the tasks in this directory, follow these steps:

1. Install [HarnessForge](https://gitlab.com/sosy-lab/software/harnessforge).
   The current task generation was done with commit `e3f4269`. Make sure that `bin/harnessforge` is in your PATH.
2. Clone the coreutils repository at tag `v9.5` to folder `original/coreutils-project`:

```
git clone --depth 1 --branch v9.5 https://github.com/coreutils/coreutils.git original/coreutils-project
```

3. Bootstrap and configure coreutils:

```
cd original/coreutils-project
./bootstrap
FORCE_UNSAFE_CONFIGURE=1 ./configure
cd ../..
```

4. Run `make generate` in the directory of this README file.