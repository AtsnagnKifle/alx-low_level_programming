#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * print_line - print line '_' * n
 *
 *@n: parameter 1
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		putchar('_');
	}
	putchar('\n');

}
