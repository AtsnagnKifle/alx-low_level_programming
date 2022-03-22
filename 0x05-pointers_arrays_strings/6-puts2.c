#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * puts2 - print a string
 *
 *@str: parameter
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; i < (int)strlen(str) ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
