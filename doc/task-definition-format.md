<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2024 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# Task Definition Format

## Version 2.0

In order to obtain verification tasks from the programs and specifications in the repository,
a simple task-definition mechanism is used.
We use [version 2.0 of this format](https://gitlab.com/sosy-lab/benchmarking/task-definition-format/-/tree/2.0)
with some additional requirements.
For each program, the repository contains a .yml file that specifies the following items:
  - `format_version`: the version of the format (the version string `2.0`)
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
    - `witness_input_file` describes which input file is a witness. Only required  
      for validation tasks, for example 
      [c/loop-invariants/witnesses/linear-inequality-inv-a.2.witness-validation.yml](../c/loop-invariants/witnesses/linear-inequality-inv-a.2.witness-validation.yml).

Optional items are explicitly marked as optional, all other items are mandatory.
The dictionary `options` can contain additional data that are not mentioned above.

[C-props]: https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/tree/main/c/properties
[Java-props]: https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks/-/tree/main/java/properties

The [SV-COMP 2019 report] has documented the first version of the repository's task-definition format 1.0,
and contains a description of the format with an example in Sect. 4 and Fig. 3.
Format 2.0 adds the `options` dictionary.
Here as example an extract of the task-definition file [c/list-properties/list-1.yml](../c/list-properties/list-1.yml):

```
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

## Version 2.1

In order to add additional information to a task, which is mostly relevant
to process tasks and for human readability, version 2.1 introduces the
key `additional_information`. This key should be ignored by any tool making use
of the task and should only contain information for either analysing or modifying
the tasks or to aid humans readability.
Apart from this it remains backwards compatible with Version 2.0 of the format.

```yaml
additional_information:
  task_type: validation # Mainly for human readability
  verification: # To know what the verdict is for the verification
  - property_file: ../../properties/unreach-call.prp
    expected_verdict: true

format_version: '2.1'

# The rest remains the same as in version 2.0

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