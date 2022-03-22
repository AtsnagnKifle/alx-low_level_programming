
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
	int j;

	len = strlen(s);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (j = (len - i) ; j < len ; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');

}
