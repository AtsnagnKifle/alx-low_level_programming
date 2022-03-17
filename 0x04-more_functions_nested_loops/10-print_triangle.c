#include "main.h"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * print_triangle - print a square
 *
 *@size: parameter 1
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size - i ; j++)
			putchar(' ');
		for (j = 1 ; j <= i ; j++)
			putchar('#');
		if (i != (size))
			putchar('\n');
	}
	putchar('\n');

}
