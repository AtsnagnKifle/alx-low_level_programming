#include "main.h"
#include<string.h>
#include<stdio.h>

/**
 * print_diagsums - print sum of diagonals
 *
 *@a:2D array
 *@size:size of array
*/

void print_diagsums(int *a, int size)
{
	int i;
	int first_sum;
	int second_sum;

	first_sum = 0;
	second_sum = 0;

	for (i = 0 ; i < size ; i++)
	{
		first_sum += *(a + ((size * i) + i));
	}
	for (i = 1 ; i <= size ; i++)
	{
		second_sum += *(a + ((size * i) - i));
	}
	printf("%d, %d\n", first_sum, second_sum);
}
