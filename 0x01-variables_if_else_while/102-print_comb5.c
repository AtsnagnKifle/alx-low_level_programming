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
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}