#include "main.h"

/**
 * factorial - using recursion return factorial of the given number
 *
 *Return: return factorial of the given number
 *@n: the given number
 */


int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
