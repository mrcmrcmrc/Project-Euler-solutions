/*Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<stdio.h>
#include<conio.h>
main()
{
    int count = 0;
    
    for(int i = 100; count < 18; i++)
    {
        for(int j = 2; j < 19; j++)
        {
            if( i % j ==0 )
            sayac++;
            else break;
        }
        count = 0;
    }
    
    printf("%d", i);
    getch();
}
