#include "main.h"
#include<stdio.h>

/**
 * _puts - print a string
 *
 *@str: parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
