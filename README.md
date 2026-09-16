<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2020 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# Collection of Verification Tasks

## Repository Description

### Purpose

This collection of verification tasks is constructed and maintained as a common benchmark
for evaluating the effectiveness and efficiency of state-of-the-art verification technology.

This repository is used by many research groups to evaluate the effectiveness and efficiency
of verification algorithms for software.
The category structure was developed for the International Competition on Software Verification [SV-COMP].

The verification tasks were contributed by several research and development groups. 
After the submission of verification tasks,
a group of people (mainly [SV-COMP] organizer and participants)
are working on improving the quality of the verification tasks.
This means that after the sets were made public, some programs were removed
(no property encoded, unknown architecture), and 
some programs got technically improved (compiler warnings, memory model).
These changes have improved the overall quality of the final set of programs for the competition [SV-COMP], and
have not changed the intended verification result; all changes are tracked in the public repository.

**This repository is open for submission of new verification tasks!**
Please refer to our [contribution guidelines](CONTRIBUTING.md)
to see how to submit verification tasks to this repository.

Thanks to all contributors of programs, patches, and discussion comments.

### Structure

The collection consists of directories, which contain verification tasks written in different languages:
- `c/` (programming language C)
- `java/` (programming language Java)
- `clauses/` (systems from the other directories translated to Horn clauses and stored in SMT format)

### License

The programs are under different licenses, which are specified either via a file `LICENSE*.txt` in the same directory,
or via a comment in the program header.
Most of the programs are under an open-source license such as Apache 2.0 or GPL.

### Origin, Description, and Attribution

The subdirectories that contain the programs contain files `README.txt`, which give further information
about the programs, in particular, this is the place to trace the origin and to attribute the programs to their contributors.
For some programs, this information is given in the header of the program as comment.

### Categories

The verification tasks for C programs are grouped into (sub-)categories
as defined by [SV-COMP](https://sv-comp.sosy-lab.org/2017/benchmarks.php).

A (sub-)category `<category>` is defined by a file named `<category>.set`
that contains patterns that specify the set of programs.


### Benchmark Tasks

The definition of verification tasks and test tasks can be found on the following sub-pages:
- [Verification Tasks](TASKS-VERIFICATION.md)
- [Test Tasks](TASKS-TESTING.md)

### Programs

The conventions for programs can be found on the following sub-pages:
- [C programs](c/CONVENTIONS.md)

### Specifications

The specifications for programs can be found on the following sub-pages:
- [C specifications](c/properties/)

### Parameters

The parameters of a verification task are needed to make additional information
about the verification task available to the verification run.

### Task Definitions

In order to obtain verification tasks from the programs and specifications in the repository,
a simple task-definition mechanism is used.
We use [version 2.0 of this format](https://gitlab.com/sosy-lab/benchmarking/task-definition-format/-/tree/2.0)
with some additional requirements.
For each program, the repository contains a .yml file that specifies the following items:
  - `format_version`: the version of the format (the version string `2.0`)
  - `additional_information`: defines the type of the task, and in case of a validation task, defines the corresponding verification task
  - `input_files`: the subject program files or directories
    (a file or directory name, or a list of files or directory names, that the program consists of)
  - `properties`: the properties that constitute the specification of the program,
    each consisting of the following items:
    - `property_file`: file that contains a property definition
      (cf. common property files [for C][C-props] and [for Java][Java-props])
    - `expected_verdict`: the intended verification result (`true` or `false`, only for non-coverage properties)
    - `subproperty` (optional): a subproperty of the property that is violated
      in cases where the property is a conjunction of subproperties (for verdict `false`)
  - `options`: parameters that are relevant for verification or give extra information:
    - `language`: programming language that the program is written in (`C` or `Java`)
    - `data_model` data model of the computer architecture
      (`ILP32`, `LP64`, see https://www.unix.org/whitepapers/64bit.html, only for `C` programs)
    - `witness_input_file` describes which input file is a witness; only required  
      for validation tasks, for example 
      [c/loop-invariants/witnesses/linear-inequality-inv-a.2.witness-2.0.yml](./c/loop-invariants/witnesses/linear-inequality-inv-a.2.witness-2.0.yml).

Optional items are explicitly marked as optional, all other items are mandatory.
The dictionary `options` can contain additional data that are not mentioned above.

[C-props]: https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/tree/main/c/properties
[Java-props]: https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/tree/main/java/properties

The [SV-COMP 2019 report] has documented the first version of the repository's task-definition format 1.0,
and contains a description of the format with an example in Sect. 4 and Fig. 3.
Format 2.0 adds the `options` dictionary.
Here as example an extract of the task-definition file [c/list-properties/list-1.yml](c/list-properties/list-1.yml):

```yaml
format_version: '2.0'

input_files: 'list-1.i'

properties:
  - property_file: ../properties/unreach-call.prp
    expected_verdict: true
  - property_file: ../properties/valid-memsafety.prp
    expected_verdict: false
    subproperty: valid-memtrack

options:
  language: C
  data_model: ILP32
```

Format 2.1 adds the `additional_information` dictionary.
Here as example an extract of the task-definition file [c/loop-invariants/witnesses/linear-inequality-inv-a.1.witness-validation.yml](c/loop-invariants/witnesses/linear-inequality-inv-a.1.witness-validation.yml):

```yaml
format_version: '2.1'

additional_information:
  task_type: validation
  verification:
    - property_file: ../../properties/unreach-call.prp
      expected_verdict: true


input_files:
  - '../linear-inequality-inv-a.c'
  - 'linear-inequality-inv-a.1.witness-2.0.yml'

properties:
  - property_file: ../../properties/unreach-call.prp
    expected_verdict: false

options:
  language: C
  data_model: ILP32
  witness_input_file: 'linear-inequality-inv-a.1.witness-2.0.yml'
```


[SV-COMP]: https://sv-comp.sosy-lab.org/
[witness format]: https://github.com/sosy-lab/sv-witnesses
[SV-COMP 2019 report]: https://doi.org/10.1007/978-3-030-17502-3_9
