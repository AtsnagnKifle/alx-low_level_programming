#include "main.h"

/**
 * _isdigit - check the given character is a digit or not
 *
 * Return: 1 if c is digit otherwise 0
 * @c: parameter 1
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
