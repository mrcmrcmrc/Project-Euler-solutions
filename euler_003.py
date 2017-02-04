#!/usr/bin/env python
# -*-coding=utf-8 -*-

def GetPrimeFactors(n):
	prime_factors = []

	while n%2 == 0:
		prime_factors.append(2)
		n = n/2

	p = 3
	while n!= 1:
		while n%p == 0:
			n = n/p
			prime_factors.append(p)
		p += 2

	return prime_factors
 
print GetPrimeFactors(600851475143)
