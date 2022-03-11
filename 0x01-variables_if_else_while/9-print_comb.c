#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - it prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
		if (!(n == 57))
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}
