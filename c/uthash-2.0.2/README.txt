Tasks in this directory were instrumented and added by Martin Spiessl.

These tasks are test cases for the uthash hashing library,
which is implemented as a preprocessor macro.

They should still pose a challenge to verifiers because of their complexity
and extensive heap memory handling.

I took the first 10 test cases with 6 of the 7 possible hash function.
The last hash function murmur hash exploits no-strict-aliasing,
which is undefined behavior and was therefore excluded.
The tests as they were did not cleanup memory properly.
I also added a fixed version of the tasks. For some however,
this fix is insufficient and leads to memory leaks,
in which case a third version of the task is also added.
For test10-3 this is still not enough, so there valid-memtrack
is still violated, I adapted the verdict accordingly.

Together with the nondeterministic variants and separate memory-cleanup tasks,
this makes a total of 354 verification tasks.

The .c files were generated and preprocessed with custom scripts.
The generator and full reproducibility instructions are available at
https://gitlab.com/masp/uthash/-/tree/2026.09.10-uthash-tasks/verification-tasks

The effective preprocessing command was:

gcc -E -P -m32 -include preprocess.h $filename

The compatibility header removes only glibc diagnostic attributes unsupported
by Clang 18 from GCC-generated declarations. It preserves other attributes and
makes the resulting .i files compile with both GCC and Clang.
preprocess.h is released under the same license as the benchmark tasks.

I refrained from formatting the preprocessed files e.g. via clang-formatter because 
verifiers should be able to cope with file that have multiple statements in one line.

Have fun with solving these tasks!

The license of uthash is essentially the 1-clause BSD license,
I just copied the LICENSE file from the uthash repository over.
I put the instrumentation code I added to create these tasks
under the same license for convenience.
The directory name is historical. The included header identifies itself as
uthash 2.1.0 and is identical to the header used by the generator.

For the nondeterministic verification tasks I simply added some nondeterminism
to the basic versions of test1.c through test4.c,
these are also put under the 1-clause BSD license for convenience.

The generated hash headers define HASH_FUNCTION. Earlier versions accidentally
defined the unused HASHFUNCTION macro, so all nominal variants actually used
the default JEN hash. This regeneration restores the intended JEN, BER, SAX,
OAT, FNV, and SFH variants.

The tests and uthash already check all relevant allocation results. Ordinary
tasks retain terminating out-of-memory handling. A terminating allocation
failure can leave earlier allocations live and therefore change a
valid-memcleanup verdict, so each eligible variant has a separate -memcleanup
task. These tasks loop in the application's allocation guard and override
uthash_fatal with a loop before including uthash. They contain only the
valid-memcleanup property, plus branch coverage for nondeterministic tasks,
while the ordinary tasks retain termination and the other properties.
