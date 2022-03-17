#include<stdio.h>

/**
 * main - largest prime factor
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long i;
	unsigned long last;

	i = 612852475143;

	last = 2;

	while (i >= last * last)
	{
		if (i % last == 0)
		{
			i = i / last;
		}
		else
		{
			last = last + 1;
		}
	}
	printf("%lu\n", last);
	return (0);

}
