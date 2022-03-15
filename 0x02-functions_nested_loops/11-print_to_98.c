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
	int no;
	int asc[10] = {48,49,50,51,52,53,54,55,56,57};
	int arr[20];

	if (n>98)
	{
		for ( i = n ; i > 98 ; i--)
		{
			no = i;
			arr = {};
			int co = 0;
			int last_digit;

			while ( no != 0)
			{
				last_digit = no % 10;
				no = no / 10;
				arr[co] = last_digit;
				co++;
			}
			co --;

			while ( co > -1)
			{
				_putchar(asc[arr[co]]);
				_putchar( ',' );
				_putchar( ' ' );
			}
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
