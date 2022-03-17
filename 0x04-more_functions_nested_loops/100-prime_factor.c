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

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);

}
