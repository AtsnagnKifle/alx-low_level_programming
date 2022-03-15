#include<stdio.h>

/**
 * main fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int fib_first = 1;
	unsigned int fib_second = 2;
	unsigned int tmp;
	unsigned int sum = 0;

	while (fib_second < 4000000)
	{
		if (fib_second % 2 == 0)
			sum = sum + fib_second;
		tmp = fib_second;
		fib_second = fib_second + fib_first;
		fib_first = tmp;
	}
	printf("%d\n", sum);
	return (0);

}
