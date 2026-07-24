# Valgrind Analysis

## aliasing_example.c

Type of error: Use-After-Free (Invalid read and write).

Memory object: A 20-byte heap block allocated via malloc.

Lifetime violation: The block's lifetime ended when it was deallocated using free(a). The program then illegally accessed it using a second pointer, b, which was left dangling.

## crash_example.c

Type of error: NULL Pointer Dereference (Invalid write / Segfault).

Memory object: Address 0x0 (NULL).

Misuse: The program attempted to write to NULL (an unmapped, protected memory address) instead of a valid allocated object, triggering an immediate crash.

## heap_example.c

Type of error: Memory Leak ("Definitely lost").

Memory object: A 6-byte heap block allocated via malloc.

Lifetime violation: The object was created, but its lifetime was never properly ended. The program exited without ever passing that block to free(), leaving it orphaned in memory.

## stack_example.c

Valgrind did not detect any errors.