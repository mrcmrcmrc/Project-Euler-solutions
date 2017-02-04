/*Pandigital products
Problem 32
We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.

HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum.*/
#include <iostream>
using namespace std;

void bolenleriBul(int sayi);
void kontrol(int sayi1, int sayi2);
void basamaklaraAyir(int sayi);
void temizle();

int numbers[10];
int global_i = 0;
int bulunansayilar[20];
int sum = 0;

int main()
{
	for(int i = 2; i < 10000; i++)
		bolenleriBul(i);
	
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(bulunansayilar[j] == bulunansayilar[i] && i != j)
				bulunansayilar[j] = 0;
		}
	}
	for(int i = 0; i < 20; i++)
	{
		sum += bulunansayilar[i];
	}
	cout<<sum;
}

void bolenleriBul(int sayi)
{
	int sayi1 = 0;
	int sayi2 = 0;
	
	for(int i=2; i < sayi / 2; i++)
	{
		if(sayi % i == 0)
		{
			sayi1 = i;
			sayi2 = sayi / i;
			kontrol(sayi1, sayi2);
		}
	}

}
void kontrol(int sayi1, int sayi2)
{	
	int count=0;

	basamaklaraAyir(sayi1);
	basamaklaraAyir(sayi2);
	basamaklaraAyir(sayi1 * sayi2);
	
	for(int i = 1; i < 10; i++)
	{
		if(numbers[i] == 1)
			count++;
	}

	if(count == 9 && numbers[0] < 1)
	{
		cout<<sayi1<<" * "<<sayi2<<" = "<<sayi1*sayi2<<endl;
		bulunansayilar[global_i] = sayi1 * sayi2;
		global_i++;
		
	}
	temizle();
	
}

void basamaklaraAyir(int sayi)
{
	int x;
	do
	{
		x = sayi % 10;
		numbers[x]++;
		sayi = sayi / 10;
		
	} while(sayi > 0);
	
}

void temizle()
{
	for(int i = 0; i<10; i++)
		numbers[i] = 0;
}
