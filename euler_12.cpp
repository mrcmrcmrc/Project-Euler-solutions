/*Highly divisible triangular number
Problem 12
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors? */

#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;

int findDivisors(int num)
{
	int sqrtn = (int) sqrt(num);
	int divisors = 0;
	
	for(int j = 1; j <= sqrtn; j++)
	{
		if(num % j == 0)
		divisors += 2;
	}
	if(sqrtn * sqrtn == num)
	divisors--;
	
	return divisors;
}

int main()
{
	clock_t t1,t2;
	int i = 1;
	int triangle_number;
	int total_divisors = 0;
	t1 = clock();
	
	while(total_divisors <= 500)
	{
		triangle_number = (i * (i + 1)) / 2;
		total_divisors = findDivisors(triangle_number);
		i++;
	}
	t2=clock();
	float diff = ((float) t2 - (float) t1) / CLOCKS_PER_SEC;
	cout<<"num: "<<triangle_number<<" divisors: "<<total_divisors<<endl;
	cout<<diff;
	cin.get();
}

