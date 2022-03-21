#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * print_rev - print a string
 *
 *@s: parameter
 */

void print_rev(char *s)
{
	int len;

	len = strlen(s);

	while (*s != '\0')
		s++;
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');

}
