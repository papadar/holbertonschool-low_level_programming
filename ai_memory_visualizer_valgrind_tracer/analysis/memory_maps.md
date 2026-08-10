# C Memory Analysis: Findings
 
Analysis of `crash_example.c`, `heap_example.c`, `stack_example.c`, and `aliasing_example.c`.
 
## 1. `crash_example.c` — NULL pointer dereference
 
```c
int n = 0;
nums = allocate_numbers(n);   // n <= 0 -> returns NULL
nums[0] = 42;                 // dereferencing NULL
```
 
- `allocate_numbers(0)` hits `if (n <= 0) return NULL;` before ever calling `malloc`.
- `main` never checks `nums` for `NULL` before writing to `nums[0]`.
- **Result:** deterministic segfault (undefined behavior per the C standard, but reliably a crash on any protected-memory OS). No heap allocation ever happens, so there's no leak here — just the invalid write.
- **Fix:** check `nums != NULL` before dereferencing.

## 2. `heap_example.c` — Memory leak (confirmed)
 
```c
free(bob->name);   // frees H3, correct
free(bob);         // frees H2, correct
 
person_free_partial(alice);   // only frees H0 (the Person), NOT alice->name (H1)
```
 
- `person_free_partial()` only calls `free(p)` — it never frees `p->name`.
- Bob is cleaned up correctly (both allocations freed in the right order).
- Alice is cleaned up incorrectly: `alice->name` ("Alice" string, H1) is orphaned — a genuine heap leak.


## Correction
while this is correct, the ai did not pick up on the fact that there also exists a partial free error as the main function returns 1 after checking if the 'new people' were allocated. 
If for instance one of the people was successfully allocated, but the 2nd was not, only the person free partial function is called, this would result in a memory leak


## 3. `stack_example.c` — No bugs, purely illustrative
 
- `walk_stack(0, 3)` recurses while `depth < max_depth`, so frames for depth 0, 1, 2, 3 all exist simultaneously at the deepest point (4 live `walk_stack` frames)
- `local_buf[16]` in `dump_frame` is only ever written at indices 0–1 — no overflow.
- `p_local` aliases `local_int` within the same frame, and both die together when `dump_frame` returns — this is legitimate (not a bug), just demonstrating automatic storage duration.
- No heap allocation, no leak, no dangling pointers. Correct as written.


## 4. `aliasing_example.c` — Use-after-free
 
```c
b = a;             // b aliases a, both point to H0
free(a);           // H0's lifetime ends; neither a nor b is nulled
...
printf("...b[2]=%d\n", b[2]);   // UAF read
b[3] = 1234;                    // UAF write
```
 
- `a` and `b` are aliases of the same `malloc`'d block; `free(a)` ends that allocation's lifetime but leaves both `a` and `b` holding the same now-dangling address.
- The subsequent read of `b[2]` and write to `b[3]` are both undefined behavior (classic use-after-free). Valgrind/ASan would flag both as "Invalid read/write of size 4" plus report the block as already freed.
- **Fix:** set `a = b = NULL;` immediately after `free(a);`, and don't touch `b` afterward.
## Summary table
 
| File | Bug type | Confirmed? | Severity |
|---|---|---|---|
| `crash_example.c` | NULL dereference | Yes | Crash (deterministic) |
| `heap_example.c` | Memory leak (partial free) | Yes | Leak in success path |
| `stack_example.c` | — | No bug found | — |
| `aliasing_example.c` | Use-after-free (read + write) | Yes | Undefined behavior / potential corruption |
 
 ## also noting here that there is a leak with heap example if the malloc of one only of the 'people' fails
