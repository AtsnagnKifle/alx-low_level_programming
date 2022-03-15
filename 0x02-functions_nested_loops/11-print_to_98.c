#include "main.h"

/**
 * print_to_98 - print n to 98
 *
 * @n: parameter
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;
	/*int no;
	int ar[10] = {48,49,50,51,52,53,54,55,56,57};*/

	if (n>98)
	{
		for ( i = n ; i > 98 ; i--)
		{
			_putchar((char)i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for ( i = n ; i < 98 ; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('9');
	_putchar('8');
}
