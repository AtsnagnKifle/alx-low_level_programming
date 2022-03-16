#include<stdio.h>

/**
 * main - fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib_first = 1;
	unsigned long fib_second = 2;
	unsigned long tmp;
	unsigned long i;

	printf("%lu, %lu, ", fib_first, fib_second);

	for (i = 2 ; i < 97 ; i++)
	{
		tmp = fib_second;
		fib_second = fib_second + fib_first;
		fib_first = tmp;
		printf("%lu, ", fib_second);
	}

	printf("%lu\n", fib_first + fib_second);
	return (0);
}
