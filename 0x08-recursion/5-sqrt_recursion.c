#include "main.h"

/**
 * _sqrt_recursion - using recursion return x pow y
 *
 *Return: return sqrt of the given number
 *@n: the given number
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (find_sqrt(n, 2));
}

/**
 * find_sqrt - find square root of the given number starting from 2
 *
 *Return: return -1 if not found the square root else sqr if found square root
 *@n: the given number
 *@sqr: starting number
 */

int find_sqrt(int n, int sqr)
{
	if (sqr * sqr > n)
		return (-1);
	else if (sqr * sqr == n)
		return (sqr);
	return (find_sqrt(n, sqr + 1));
}



