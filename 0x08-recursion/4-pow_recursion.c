#include "main.h"

/**
 * _pow_recursion - using recursion return x pow y
 *
 *Return: return x pow y
 *@x: number 1
 *@y: number 2
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
