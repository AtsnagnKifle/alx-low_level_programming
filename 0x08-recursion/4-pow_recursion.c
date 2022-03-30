#include "main.h"

/**
 * factorial - using recursion return factorial of the given number
 *
 *Return: return factorial of the given number
 *@n: the given number
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
