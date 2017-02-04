/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	clock_t t1, t2;
	int number = 4;
	int counter = 2;
	t1 = clock();
	
	while (counter != 100001)
	{
		for (int i = 2; i < (int)sqrt(number) + 1; i++)
		{
			if (number%i == 0)
			{
				number++;
				break;
			}
			else if (i == (int)sqrt(number))
			{
				//cout << number << "\n";
				counter++;
				number++;
			}
		}
	}
	
	
	t2 = clock();
	float diff = ((float)t2 - (float)t1) / CLOCKS_PER_SEC;
	cout << number - 1 << "\t" << counter << endl;
	cout << diff<<endl;
	system("pause");
}
