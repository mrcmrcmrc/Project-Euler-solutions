/*Coin sums
Problem 31
In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:

1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).
It is possible to make £2 in the following way:

1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
How many different ways can £2 be made using any number of coins?*/
#include<iostream>
using namespace std;

int main()
{
	int money = 0;
	int count = 0;
	int target = 200;
	
	for(int i = 0; i < target/200; i++)
	{
		for(int j = 0; j <= target/100; j++)
		{
			for(int k = 0; k <= target/50; k++)
			{
				for(int l = 0; l <= target/20; l++)
				{
					for(int m = 0; m <= target/10; m++)
					{
						for(int n = 0; n <= target/5; n++)
						{
							for(int p = 0; p <= target/2; p++)
							{
								for(int r = 0; r <= target/1; r++)
								{
									money = i*200 + j*100 + k*50 + l*20 + m*10 + n*5 + p*2 + r*1;
									if(money == target)
									count++;
								}
							}
						}
					}
				}
			}
		}
		
	}
	cout<<count;
	cin.get();
}
