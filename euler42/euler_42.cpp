/*Coded triangle numbers
Problem 42
The nth term of the sequence of triangle numbers is given by, tn = ½n(n+1); so the first ten triangle numbers are:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

By converting each letter in a word to a number corresponding to its alphabetical position and adding these values we form a word value. For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. If the word value is a triangle number then we shall call the word a triangle word.

Using words.txt (right click and 'Save Link/Target As...'), a 16K text file containing nearly two-thousand common English words, how many are triangle words?*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int score(char[]);
void control(int score);
char word[20];
int count = 0;

main()
{
	FILE *fp;
	
	int read;
	int c;

	bool firstQuote=false;
	bool secondQuote=false;
	int i=0;
	
	fp = fopen("words.txt", "r");
	if(fp == NULL)
		printf("file is not exist");
	else
	{
	
	do{
		
		read = getc(fp);
		
		if(firstQuote&&read != (char)'"')
		{
			c = (char)read;
			word[i] = c;
			i++;
		}
		
		if(read == (char)'"')
		{
			if(firstQuote)
			{
				secondQuote = true;
				firstQuote = false;
			}
			else if(secondQuote == false)
				firstQuote = true;
		}
			if(read == (char)',')
			{
				
				firstQuote = false;
				secondQuote = false;
				i = 0;
			
				int tempscore = score(word);
				control(tempscore);
			
				for(int j = 0; j < 20; j++)
				{
					word[j] = NULL;
				}
			}


} while(read != EOF);
	fclose(fp);
}
	
	printf("Total: %d\n", count);
	control(39);
	getch();
}


int score(char array[])
{
	int x = 0;
	int sum = 0;
	for(int y = 0; y < strlen(array); y++)
	{
		for(char a = 'A'; a <= 'Z'; a++)
		{	
			x++;
			if(a == array[y])
			{
				sum += x;
			}
	}
	x = 0;
	}

	return sum;
}

void control(int score)
{
	for(int n = 1; n < score / 2; n++)
	{
		if((n * (n + 1)) / 2 == score)
		{
			printf("%s is OK. Score = %d ", word, score);
			printf(" (%d * %d)/2 = %d\n", n, n+1, score);
			count++;
		}
	}
}
