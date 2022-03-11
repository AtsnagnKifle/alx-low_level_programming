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
	int first_letter;
	int n;

	for (n = 48 ; n < 58 ; n++)
		putchar(n);

	for (first_letter = 97 ; first_letter < 103 ; first_letter++)
	{
		putchar(first_letter);
	}

	putchar('\n');
	return (0);

}
