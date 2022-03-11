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
	int upper_letter;

	for (first_letter = 97 ; first_letter < 123 ; first_letter++)
	{
		putchar(first_letter);
	}

	for (upper_letter = 65 ; upper_letter < 91 ; upper_letter++)
	{
		putchar(upper_letter);
	}

	putchar('\n');
	return (0);

}
