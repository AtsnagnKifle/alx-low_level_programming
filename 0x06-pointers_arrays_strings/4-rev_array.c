#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * reverse_array - revers an array
 *
 *@a: parameter
 *@n: parameter
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	i = 0;
	j = n - 1;

	for ( ; i < j ; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
