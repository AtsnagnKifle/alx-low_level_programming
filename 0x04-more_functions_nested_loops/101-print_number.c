#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * print_number - print line '_' * n
 *
 *@n: parameter 1
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');

}
