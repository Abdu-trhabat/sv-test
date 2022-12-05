Benchmarks from Amazon AWS C commons library
============================================

You can find the original sources here:
https://github.com/awslabs/aws-c-common

Prepared by Gidon Ernst <gidonernst@gmail.com> (LMU Munich)
with help from Daniel Schwartz-Narbonne (AWS).

The benchmark files are under the same license as AWS C commons (Apache 2.0).

They have been checked with CMBC (see hidden folder `.cbmc-batch`).

This is an automatic translation of these benchmark files into the format expected by SV-COMP.

File `prelude.h` contains some definitions that are inserted in the generated benchmarks.
If necessary, make modifications there.


Steps to re-create these files
------------------------------

Based on commit `816ec134472c4d0d5ad0d949bae3417617f1e63d` from 
`https://github.com/awslabs/aws-c-common`.

- Check out the sv-benchmarks into some directory $SV
- Check out AWS C commons into some directory $AWS and apply `patch.diff`.
  It should create a `Makefile.sv-benchmarks`, include it at the end of `Makefile.common`.
  Furthermore, a few fixes in the source tree are made.
- Finally, create all the files with:

    $SV/c/aws-c-common/makeall $AWS $SV


### Mutation-Based Sanity Check

To gain more understanding about these programs,
mutants are created by negating the conditions
of the __VERIFIER_assert() calls for 170 true tasks.
The verdicts of the mutated tasks are set to false.
(The mutation operations were performed by script `negated_assertion.sh`.)

