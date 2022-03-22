
#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * puts_half - print a string
 *
 *@s: parameter
 */

void puts_half(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = (len / 2) ; i < len ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
