# Memory behavial in C

## aliasing_example.c

### 1. Initial State (Inside `main` before call)
*   **Stack (`main`)**: `a` = `NULL`, `b` = `NULL`, `n` = `5`
*   **Heap**: Empty

### 2. Allocation (Inside `make_numbers` before return)
*   **Stack (`make_numbers`)**: `n` = `5`, `i` = `5`, `arr` = `0xH100` (Mock heap address)
*   **Stack (`main`)**: `a`, `b`, `n` (Unchanged)
*   **Heap**: `0xH100` to `0xH113` allocated. Value = `[0, 11, 22, 33, 44]` (Lifetime: **Active**)

### 3. Aliasing (Back in `main` after `b = a`)
*   **Stack (`main`)**: `a` = `0xH100`, `b` = `0xH100`, `n` = `5`
*   **Heap**: `0xH100` array is `[0, 11, 22, 33, 44]` (Lifetime: **Active**)
*   *Note: `a` and `b` are now aliases pointing to the same memory.*

### 4. Use-After-Free (After `free(a)`)
*   **Stack (`main`)**: `a` = `0xH100` (Dangling), `b` = `0xH100` (Dangling), `n` = `5`
*   **Heap**: `0xH100` array is reclaimed. (Lifetime: **Dead/Freed**)
*   *Note: Reading/writing `b[2]` and `b[3]` are Use-After-Free errors because `b` points to freed memory.*


## crash_example.c

### 1. Initial State (Inside `main` before call)
*   **Stack (`main`)**: `nums` = `NULL`, `n` = `0`
*   **Heap**: Empty

### 2. Inside `allocate_numbers` (Before early return)
*   **Stack (`allocate_numbers`)**: `n` = `0`, `arr` = `NULL`, `i` = `0`
*   **Stack (`main`)**: `nums` = `NULL`, `n` = `0`
*   **Heap**: Empty (No allocation occurs because `n <= 0` triggers an early `return NULL`)

### 3. NULL Dereference and Crash (Back in `main`)
*   **Stack (`main`)**: `nums` = `NULL`, `n` = `0`
*   **Heap**: Empty
*   *Note: Writing to `nums[0]` attempts to dereference the `NULL` pointer (address `0x0`). This causes a deterministic segmentation fault. Object lifetimes end abruptly here as the process crashes before reaching `free()`.*

## heap_example.c

### 1. Initial State (Inside `main` before calls)
*   **Stack (`main`)**: `alice` = `NULL`, `bob` = `NULL`
*   **Heap**: Empty

### 2. After Allocations (Back in `main` after both `person_new` calls)
*   **Stack (`main`)**: `alice` = `0xH100`, `bob` = `0xH200`
*   **Heap**: 
    *   `0xH100` (`Person` struct for Alice): `name` = `0xH110`, `age` = `30` (Lifetime: **Active**)
    *   `0xH110` (String array): `"Alice\0"` (Lifetime: **Active**)
    *   `0xH200` (`Person` struct for Bob): `name` = `0xH210`, `age` = `41` (Lifetime: **Active**)
    *   `0xH210` (String array): `"Bob\0"` (Lifetime: **Active**)

### 3. Proper Cleanup (After freeing `bob->name` and `bob`)
*   **Stack (`main`)**: `alice` = `0xH100`, `bob` = `0xH200` (Dangling)
*   **Heap**:
    *   `0xH100` struct & `0xH110` string for Alice remain untouched. (Lifetime: **Active**)
    *   `0xH200` struct & `0xH210` string for Bob are reclaimed. (Lifetime: **Dead/Freed**)

### 4. Memory Leak (After `person_free_partial(alice)`)
*   **Stack (`main`)**: `alice` = `0xH100` (Dangling)
*   **Heap**:
    *   `0xH100` struct for Alice is reclaimed. (Lifetime: **Dead/Freed**)
    *   `0xH110` string array (`"Alice\0"`) remains in memory, but all pointers to it are gone. (Lifetime: **Active, but Leaked**)
    *   *Note: `person_free_partial` only frees the outer struct (`p`), leaving the dynamically allocated `p->name` orphaned on the heap.*

## stack_example.c

### 1. Initial State (Inside `main` before call)
*   **Stack (`main`)**: Active (no explicit local variables)
*   **Heap**: Empty

### 2. Deepest Recursion (Inside `dump_frame` called by `walk_stack` at `depth=3`)
*   **Stack (`walk_stack`, depth=0)**: `marker` = `0`
*   **Stack (`walk_stack`, depth=1)**: `marker` = `10`
*   **Stack (`walk_stack`, depth=2)**: `marker` = `20`
*   **Stack (`walk_stack`, depth=3)**: `marker` = `30`
*   **Stack (`dump_frame`, depth=3)**: 
    *   `label` = `"enter"`, `depth` = `3`
    *   `local_int` = `103` (Mock Address: `0xS100`)
    *   `local_buf` = `['D', '\0', ...]`
    *   `p_local` = `0xS100` (*Note: `p_local` is an alias to `local_int`*)
*   **Heap**: Empty (No `malloc` used in this program)
*   *Note: Each recursive call creates a new, distinct stack frame. All nested frames listed above are currently **Active**.*

### 3. After Recursion Unwinds (Back in `main` before exit)
*   **Stack (`main`)**: Active
*   **Heap**: Empty
*   *Note: All `walk_stack` and `dump_frame` stack frames have been popped. Their local variables and pointers (like `p_local`) are now **Dead**. The memory is reclaimed by the stack pointer moving back up.*