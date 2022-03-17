#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * print_diagonal - print line '_' * n
 *
 *@n: parameter 1
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');

}
