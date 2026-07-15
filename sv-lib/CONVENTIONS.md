<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# Conventions of SV-LIB Benchmarks

## Conventions for Existing SV-LIB Benchmarks

All benchmarks need to adhere to the [SV-LIB standard version 1.0](https://doi.org/10.48550/arXiv.2511.21509)
and need to fulfill all requirements outlined in section 8 of the standard,
including being a well-formed program (sections 8.1, 8.2)
and having no code-smells (section 8.3).

In addition for benchmarks to be used in SV-COMP they need to fulfill the following constraints:
* Each label, loop and procedure body needs to have a script unique tag
    - This is necessary in order for a tool to be able to output a full correctness 
        witness containing the invariants and function contracts required for a modular proof
* There is at most one `verify-call` command per benchmark task
    - Currently the SV-COMP infrastructure disallows a list of expected verdicts
        for a task, which would be necessary when having multiple `verify-call`
        commands.

**Note**: Benchmarks for projects other than SV-COMP are very welcome!
        These do not need to adhere to the additional requirements for SV-COMP above.

**Note**: All of these conditions should be checked by the CI, in case they are not please [open an issue](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/work_items)!

### Validation Benchmarks

In contrast to other programming languages like C, there are no
validation benchmarks in SV-LIB, since each validation task (composed of a program and witness)
can be joined together into a single verification task.
Therefore, it is not necessary to have additional validation benchmarks.

## Conventions for Adding new SV-LIB Benchmarks

To add new benchmarks for SV-LIB please consider the following checklist:

* [ ] If not present: Add high-level explanation of added benchmarks to the [README.md](./README.md)
* [ ] If transforming tasks: Ensure that only a sample of the tasks is 
    added to not overwhelm the repository, due to the many possible transformations from C/Java/Rust to SV-LIB

**Note**: This checklist should be kept in sync with the MR description template.