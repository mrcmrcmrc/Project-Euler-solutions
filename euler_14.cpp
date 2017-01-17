/* The following iterative sequence is defined for the set of positive integers:
n → n/2 (n is even)
n → 3n + 1 (n is odd)
Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.*/

#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	unsigned long long number = 0;
	int max_number = 1;
	unsigned short int counter = 0;
	unsigned short int max_chain = 0;
	clock_t t1, t2;
	t1 = clock();
	
	for (int i = 1; i < 1000000; i++)
	{
		
		number = i;
		while (number != 1)
		{
			if (number % 2 == 0)
			{
				number = number / 2;
			}
			else
			{
				number = 3 * number + 1;
			}
			counter++;
		}
		if (counter > max_chain)
		{
			max_chain = counter;
			max_number = i;
		}
		counter = 1;
	}
	t2 = clock();
	float diff = ((float)t2 - (float)t1) / CLOCKS_PER_SEC;
	cout << max_number << endl << max_chain <<" longest chain"<< endl;
	cout << diff<<" seconds";
	cin.get();
	
}