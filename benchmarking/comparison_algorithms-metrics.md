# Comparison for algorithms

Using a double 'for' is a O(n²) case.
We can see it when searching for even numbers.

When using a double 'for' we got times of 0.82s that it appears to be 
fast cause it is less than a second. But imagine that with bigger data.

Using only one 'for' in this case give us 0.000030s which is incredible faster than using the double 'for'

Here we can see the example on the execution times where naive is the nested 'for' and single is just one 'for':

Naive algorithm result: 625025000
Naive algorithm time: 0.826935 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000030 seconds

Naive algorithm result: 625025000
Naive algorithm time: 0.787558 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000064 seconds

Naive algorithm result: 625025000
Naive algorithm time: 0.602801 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000030 seconds

Naive algorithm result: 625025000
Naive algorithm time: 0.756502 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000029 seconds
