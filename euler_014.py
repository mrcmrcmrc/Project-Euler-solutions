# -*- coding: utf-8 -*-

# The following iterative sequence is defined for the set of positive integers:
# n → n/2 (n is even)
# n → 3n + 1 (n is odd)
# Using the rule above and starting with 13, we generate the following sequence:
# 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
# It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
# Which starting number, under one million, produces the longest chain?
# NOTE: Once the chain starts the terms are allowed to go above one million.

import timeit

number = 0.0;
counter = 1;
max_sum = 0;
max_number = 0;
start = timeit.default_timer();

for i in range(1, 1000000):
	number = i;
	
	while number != 1:
		if number %2 == 0:
			number = number / 2;
		else:
			number = 3 * number + 1;
		counter += 1;
	if counter > max_sum:
		max_sum = counter;
		max_number = i;
	counter = 1;
	stop = timeit.default_timer();
print max_number;
print max_sum;
print stop - start;
