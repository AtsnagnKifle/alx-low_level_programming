#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - it prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_letter;

	for (first_letter = 97 ; first_letter < 123 ; first_letter++)
	{
		if (first_letter == 101 || first_letter == 113)
			continue;

		putchar(first_letter);
	}
	putchar('\n');
	return (0);

}
