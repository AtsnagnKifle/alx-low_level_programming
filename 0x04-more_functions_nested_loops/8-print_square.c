#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * print_square - print a square
 *
 *@n: parameter 1
 */

void print_square(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
			putchar('#');
		if (i != (n - 1))
			putchar('\n');
	}
	putchar('\n');

}
