#include<stdio.h>

/**
 * main - fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long fib_first = 1;
	long fib_second = 2;
	long tmp;
	long i;

	printf("%ld, %ld, ", fib_first, fib_second);

	for (i = 2 ; i < 49 ; i++)
	{
		tmp = fib_second;
		fib_second = fib_second + fib_first;
		fib_first = tmp;
		printf("%ld, ", fib_second);
	}

	printf("%ld\n", fib_first + fib_second);
	return (0);
}
