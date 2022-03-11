#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - it prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48 ; i < 58 ; i++)
	{

		for (j = i + 1 ; j < 58 ; j++)
		{
			for (k = j + 1 ; k < 58 ; k++)
			{

				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
