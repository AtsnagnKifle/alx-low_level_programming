#include "main.h"
#include<stdio.h>

/**
 * _print_rev_recursion - using recursion print a string in reverse
 *
 *@s: string s
 */


void _print_rev_recursion(char *s)
{
	char t;

	t = *s;

	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(t);
}
