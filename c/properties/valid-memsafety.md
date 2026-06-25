Consists of three subproperties that are checked simultaneously:
- valid-deref
- valid-free
- valid-memtrack

<i>Agreement:</i>
All programs in category 'MemorySafety' either satisfy all (partial) properties
or violate exactly one (partial) property p (p in {valid-free, valid-deref, valid-memtrack})
that is reachable from the program entry.
We ignore further property violations on a path after finding the first violation
(because the behavior is undefined after the first violation).
