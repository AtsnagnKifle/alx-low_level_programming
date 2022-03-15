#include "main.h"

/**
 * print_alphabet_x10 - print 10 * alphabet in lower-case
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	int i;
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		for (i = 97 ; i < 123 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
