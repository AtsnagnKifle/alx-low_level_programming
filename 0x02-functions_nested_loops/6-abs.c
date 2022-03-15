#include "main.h"

/**
 * _abs - return absolute value of a given number
 *
 * @n: number to be checked
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
