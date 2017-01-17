/*Large sum
Problem 13
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	FILE *fp = fopen("numbers.txt", "r");
	int c;
	int i = 0;
	int j = 0;
	int num[5000];
	char numbers[5000];
	int basamaklar[50];
	int finalNumber[50];
	int elde = 0;
	int tut1, tut2;
	
	do
	{
		c = getc(fp);
		if( c == '\n')
		{
			j = 0;
		continue;
		
		}
		else {
			numbers[i] = c;
			num[i] = atoi( &numbers[i]);
			basamaklar[j] += num[i];
			i++;
			j++;
		}
	} while(c != EOF);
	
	printf("%d....", basamaklar[48]);
	
	for(int n = 49; n >= 0; n--)
	{
		finalNumber[n] = (basamaklar[n]) % 10;
		elde = basamaklar[n] - basamaklar[n] % 10;
		
		if(n == 0)
		{		
			tut1 += basamaklar[0] % 10 + ( elde/10 ) % 10;
			tut2 = (elde/100);
		}
		else if(n == 1)
		{
			basamaklar[n - 1] = basamaklar[n - 1] + (elde/10) % 10;
			tut1 = (elde/100);
		}
		else
		{
			basamaklar[n - 1] = basamaklar[n - 1] + (elde/10) %1 0;
			basamaklar[n - 2] = basamaklar[n - 2] + (elde/100);
	
	}
		printf("basamaklar[n]= %d   elde= %d\n", basamaklar[n], elde);
		printf("num= %d\n", finalNumber[n]);

	}
	printf("%d--%d", tut2, tut1);
	getch();
}
