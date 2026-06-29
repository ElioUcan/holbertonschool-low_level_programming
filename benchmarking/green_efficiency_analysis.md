# Measurement Methodology

The library time.h was used with the function clock() to measure time between executable actions. Specifically, clock() captures CPU ticks at a given moment. Taking two snapshots, subtracting them, and dividing by CLOCKS_PER_SEC gives the elapsed time in seconds. This made it straightforward to isolate the time spent in each phase: building the data, processing it, and reducing the results. The main advantage is that it requires no external libraries, just the standard C library. Four timestamps were recorded (t0 through t3), one before each phase and one after the last, so each elapsed time could be computed independently.

# Observed Performance Differences

When running nested for loops, execution time grew noticeably with each added level of nesting. A single loop over a large range completes fast. Two nested loops over the same range is already slower, proportional to the square of the input size. Three levels and the difference becomes hard to ignore. This matches the expected behavior for O(n²) and O(n³) complexity: the number of operations does not grow linearly, it multiplies. For small inputs the difference is invisible. For larger ones it becomes the main bottleneck.

# Relation Between Runtime and Energy Consumption

Longer execution time means the CPU stays active longer, which draws more power from the system. It works the same way as leaving a light on: the longer it runs, the more electricity it uses. In a real production environment this has direct costs. A process that takes 10 seconds instead of 1 second is not just slower, it is more expensive to run, especially when it executes thousands of times a day on shared infrastructure.

# Limitations of the Experiment

We only tested a small number of cases. Not all possible execution paths were covered. We did not test with larger datasets, which would have made the time differences more visible. We also did not compare alternative algorithms that could solve the same problem more efficiently. Memory usage was not measured at all, which is another variable that affects real-world performance. The results show a general trend, but the specific numbers should not be treated as benchmarks outside these conditions.

# Practical Engineering Takeaway

clock() does one thing well: it shows where your code spends its time. Once you know which section is slow, you can start asking the right questions. Is it the algorithm? The data structure? The number of iterations? Identifying the slow section is the first step. The actual fix depends on what you find, and that is a different problem. But you cannot optimize what you have not measured, and clock() at least gives you a place to start.