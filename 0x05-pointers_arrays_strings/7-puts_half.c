
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
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for ( ; i < len ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
