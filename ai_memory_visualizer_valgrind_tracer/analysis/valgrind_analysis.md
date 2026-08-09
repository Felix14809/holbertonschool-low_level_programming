# Valgrind analysis

Every valgrind error produced by `heap_example.c` and `aliasing_example.c`, mapped to the memory misuse that caused it. Memory states referenced below are from `memory_maps.md`.

## Method

```bash
valgrind --leak-check=full --show-leak-kinds=all --num-callers=20 ./the_progam
```

| Flag | Purpose |
|---|---|
| `--leak-check=full` | per-block stack trace for each leak, not just a count |
| `--show-leak-kinds=all` | prints all four categories, so `definitely lost` can be told from `still reachable` |
| `--num-callers=20` | deeper backtraces |
---

# 1. `heap_example.c` — 6 bytes definitely lost

```
==491== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==491==    at 0x4846828: malloc
==491==    by 0x109211: person_new (heap_example.c:21)
==491==    by 0x1092FA: main (heap_example.c:51)
==491==
==491== LEAK SUMMARY:
==491==    definitely lost: 6 bytes in 1 blocks
==491==    still reachable: 0 bytes in 0 blocks
```

**Leak due to lost ownership.** Line 21 is `p->name = malloc(len + 1)`, and the `main:51` frame identifies the call as `person_new("Alice", 30)`, so the block is Alice's name buffer — 6 bytes, matching `strlen("Alice") + 1`. Each `Person` costs two independent allocations with two separate deallocation obligations. Bob is torn down correctly at lines 66–67, but Alice goes through `person_free_partial`, which executes only `free(p)`. As Step 6 of the memory map shows, the sole pointer holding the name buffer's address was the `name` field inside the struct that call just freed. The address is now unreachable and cannot be freed, hence `definitely lost: 6 bytes` and `still reachable: 0 bytes`.

---

# 2. `aliasing_example.c` — invalid read at line 42

```
==497== Invalid read of size 4
==497==    at 0x1092F5: main (aliasing_example.c:42)
==497==  Address 0x4a7d088 is 8 bytes inside a block of size 20 free'd
==497==    at 0x484988F: free
==497==    by 0x1092D1: main (aliasing_example.c:38)
==497==  Block was alloc'd at
==497==    at 0x4846828: malloc
==497==    by 0x1091E4: make_numbers (aliasing_example.c:12)
```

**Use-after-free (read).** The report is the whole causal chain: bad access at line 42, block freed at line 38, block allocated at `make_numbers:12`. `8 bytes inside a block of size 20` confirms an index 2 of `sizeof(int)`. Step 4 of the memory map shows why the access is invalid: `b = a` copies the pointer value without allocating anything, leaving one block, and two names for it. The `free(a)` at line 38 receives an address rather than a variable, it cannot find `b` and does not alter it. Both pointers keep their exact bit patterns while the object they designated was destroyed. The variable `b` is alive but the block is not. So when the program later attempts to print b[2] it returns gargabe since it is a use-after-free error. Although valgrind reports reading b[2]=22 that is not the case when the program is run by itself since valgrind preserves any freed blocks.

---

# 3. `aliasing_example.c` — invalid write at line 44

```
==497== Invalid write of size 4
==497==    at 0x109315: main (aliasing_example.c:44)
==497==  Address 0x4a7d08c is 12 bytes inside a block of size 20 free'd
==497==    at 0x484988F: free
==497==    by 0x1092D1: main (aliasing_example.c:38)
```

**Use-after-free (write).** Same block, same alias, same free. Offset 12 is b[3] and the invalid write of size 4 is an integer being written. The write attempts to modify data that it no longer owns and if the block has already been reused by another allocation, the write may silently corrupts an unrelated live object. Which is why this is the most dangerous of the three errors and why `MEM30-C` forbids *accessing* freed memory rather than only writing to it.

---

# 4. `aliasing_example.c` — invalid read at line 45

```
==497== Invalid read of size 4
==497==    at 0x109323: main (aliasing_example.c:45)
==497==  Address 0x4a7d08c is 12 bytes inside a block of size 20 free'd
==497==    at 0x484988F: free
==497==    by 0x1092D1: main (aliasing_example.c:38)
```

**Use-after-free (read).** Line 45 reads back what line 44 wrote to b[3] — same offset, same block, same alias. Just as previous `Invalid read of size 4`. Under Valgrind this line prints the correct read `1234`since the blocks are preserved during valgrinds process.

---

