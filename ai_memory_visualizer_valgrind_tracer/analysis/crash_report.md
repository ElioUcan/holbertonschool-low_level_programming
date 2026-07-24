# Crash Report

## Description of the crash

Segmentation fault core dumped because the program tries to store information on null heap storage.

## Root cause analysis

The code crashes because the function allocate_numbers returns NULL when n = 0. In this case n in fact is equal to 0, so when we try to assign a value in memory to *nums we are trying to assingn a value to NULL which provoques a segmentation fault error. 


## Why the memory access is invalid

The memory access is invalid because it is NULL.


## Suggested fix

1. Put a number that is allowed and display a descriptive error message.

2. Check if *nums is null, in that case we do not allow the assigment of memory.