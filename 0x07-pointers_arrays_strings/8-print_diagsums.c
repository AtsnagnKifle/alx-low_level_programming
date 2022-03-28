#include "main.h"
#include<string.h>

/**
 * print_diagsums - print sum of diagonals
 *
 *@a:2D array
 *@size:size of array
*/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int ltor;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				ltor = ltor + a[i][j];
			}
		}
	}

	_putchar(ltor);
}
