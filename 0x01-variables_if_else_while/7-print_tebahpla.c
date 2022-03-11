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

	for (first_letter = 122 ; first_letter > 96 ; first_letter--)
	{
		putchar(first_letter);
	}

	putchar('\n');
	return (0);

}
