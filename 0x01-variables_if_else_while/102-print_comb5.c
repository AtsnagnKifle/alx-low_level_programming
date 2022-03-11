#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - it prints all possible different combinations of two two-digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 57 ; j++)
		{
			for (k = i ; k < 58 ; k++)
			{
				for (l = j + 1 ; l < 58 ; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
