<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2020 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# Contribution Guidelines

If you have identified an issue with existing verification tasks,
or want to submit new verification tasks,
please [file an issue](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/issues/new)
or, even better, submit a pull request.

For issues with existing verification tasks that affect the expected answer of the task,
it is helpful if you can additionally provide a machine-readable [witness](https://github.com/sosy-lab/sv-witnesses)
that supports your claim.
If such a case occurs, in general we try to fix the problem in the task
while keeping the task's original intention,
and at the same time add a copy of the unchanged problematic task
with an appropriately updated expected answer.

For new verification tasks, please read the remainder of this document.


## How to Submit Verification Tasks to this Repository

In order to contribute verification tasks, please use the following steps:
- clone the repository,
- commit your additions or changes to this repository (ask the maintainer (Dirk) for developer access),
- file a merge request, and
- discuss with community members until your contribution is approved (twice) and merged into the repository.


### Directory Structure and Names

In general, groups of new verification tasks should be added to a new directory
under the respective language-specific directory.
The name of this directory should describe the source and/or purpose of these verification tasks.

The names of the individual files should be based on the file name or short title of the original program
(for real-world source) or a description of what is verified in this verification task.

Note that the file names of verification tasks need to be globally unique in the repository.


### License

All files need to have a copyright statement and a license declaration
in a machine-readable comment at the beginning.
We follow the current version of the [REUSE Specification](https://reuse.software/spec/),
for more information and tool support cf. the [tutorial](https://reuse.software/tutorial/)
and [FAQ](https://reuse.software/faq/) of the REUSE project.

Example:
```
// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2020 ...
//
// SPDX-License-Identifier: Apache-2.0
```
Such a header can be easily created with the [reuse tool](https://github.com/fsfe/reuse-tool/):
```
reuse addheader --template header.jinja2 --year "2020" --copyright "..." --license Apache-2.0 yourfile.c
```
The tool can also be used for unsupported file types:
- for preprocessed `*.i` files use `--style c`,
- for text files (e.g. `README`s) use `--style python`.

The stated license must allow to:
- view, understand, investigate, and reverse engineer the algorithm or system,
- change the program (in particular, preprocess and adopt the programs to be useful for a verification task),
- (re-)distribute the (original and changed) program under the same terms (in particular, in replication packages for research projects or as regression tests),
- compile and execute the program (in particular, for the purpose of verifying that a specification violation exists), and
- commercially take advantage of the program (in particular, to not exclude developers of commercial verifiers).

If possible, standard open-source licenses such as Apache 2.0 or GPL are preferred,
but custom licenses are possible
(in the header, these need to be indicated as `LicenseRef-$NAME`
and a file named `LicenseRef-$NAME.txt` with the license needs to be created
in the `LICENSES` directory.

If you are submitting verification tasks that are based on third-party source code,
**make sure to follow the restrictions of the original license**!
For example, verification tasks based on GPL source code must be licensed under the GPL as well.
Furthermore, the most common open-source licenses all require
that any existing copyright notices are kept intact,
do not delete them and make sure that any preprocessing also preserves them.


### Origin, Description, and Attribution

The subdirectories that contain the programs should contain a file `README.txt` or similar
that gives further information about the programs.
In particular, this is the place to describe the origin and to add any attribution.
Please add a link to project web sites and any relevant publications in such a description.


### C Programs

For verification tasks written in C, some additional requirements are necessary.
In general, we prefer source code that adheres to the ANSI C standard,
but for real-world programs GNU C is also acceptable.


#### Task Definition

For each verification problem,
a separate [task definition](README.md#task-definitions)
in form of a `.yml` file is required that contains the file name of the verification task and
the expected result for at least one [property](README.md#specifications).
The `.yml` file should be named just like the original verification problem (except file ending).
The task definition can contain additional information.
For example, it needs to define the language (C or Java).


#### Category

In order to be effectively used by people (e.g., in SV-COMP),
the verification tasks need to be part of some category.
Thus, please choose an appropriate category of [SV-COMP](https://sv-comp.sosy-lab.org/2017/benchmarks.php)
and make sure that your programs are
- matched by the `.set` file of the category by adding appropriate patterns and
- are made to be verified against the specification used by this category.

Programs can also be part of several categories if more than one property is present.
If a task does not fit in any existing category, you may propose a new category.

#### Data Model

For C programs, the data model (`ILP32` or `LP64`)
needs to be specified in the task-definition file.
This mostly affects sizes of data types.

#### Preprocessing

The README states:

> Un-preprocessed programs fulfill the following requirements:
> 1. `#include` directives only include headers from the C standard or `pthread.h`.
> 2. No `#define` directives are used.
> 3. All used macros are defined by the C standard or `pthread.h`.

If a submitted C program consists of a single file which fulfills these requirements, then:
* It should be submitted as a `.c` file which is un-preprocessed.
* The `.c` file should be compilable by recent versions of GCC and Clang.
* No corresponding preprocessed `.i` file should be added to the repository.
* The task definition should define the `.c` file as input file.

If a submitted C program consists of multiple files and/or does not fulfill these requirements, then:
* It should be submitted as a `.i` file which has been preprocessed as follows:
  * Use a recent version of `cpp`/GCC/Clang.
  * Use the architecture flag `-m32` or `-m64` corresponding to the data model in the task definition.
  * Use the `-P` flag to omit `#line` directives from the result.
  * If preprocessing requires additional macro definitions (`-D` arguments) or include paths (`-I` arguments), then these should be documented, e.g., in a README file or in a comment in the `.c` file.
* The `.i` file should be compilable by recent versions of GCC and Clang.
* All original un-preprocessed `.c` and `.h` files should be added to the repository for reference.
* The task definition should define the `.i` file as input file.

#### Compile Checks

Verification tasks in this repository need to be compilable, preferably without warnings.
We use a continuous-integration to check this.
In order to enable these checks for programs in a new directory,
please add a `Makefile` in the directory with the following content:
```
LEVEL := ../

include $(LEVEL)/Makefile.config
```
If the programs are for 64-bit systems,
additionally add `CC.Arch := 64` before the `include` line.

Then run `make clean && make CC=gcc && make clean && make CC=clang` from a shell in your new directory.

If some compiler warnings can not or should not be fixed, it is possible to whitelist them in the `Makefile`.
Its is also possible to ignore specific files or directories that should not be checked.
Please refer to the [Makefile documentation](c/Makefile-README.md) for more details.

#### Sanity Checks

We also have a script that performs some sanity checks on verification tasks.
Please run [check.py](c/check.py) and check for any `ERROR`s reported.
If some violation is on purpose (e.g., additional files that are no verification tasks),
please whitelist the respective warning by adding it to one of the `KNOWN_*_PROBLEMS` lists
in the script.
