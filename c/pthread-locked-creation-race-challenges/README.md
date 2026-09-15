# Locked Pthread Creation Challenges

This suite contains several synthetic test cases making use of synchronization patterns,
where threads are created, while mutexes must be held.
Files whose names have the infix `safe` implement them successfully, whereas those infixed with `race` do not.
All tasks originate from the Goblint benchmark suite.

## Cross-Thread Critical Sections
A mutex is held throughout the execution of another thread, thus protecting that thread.
All files prefixed with `ctcs` use this pattern.

## Happened-Before Relationship
A mutex $m$ is held in thread $A$ while $A$ creates thread $B$. In $B$, $m$ is acquired.
Events after this acquisition must happen after $m$ is released in $A$.
All files prefixed with `hb` use this pattern.
