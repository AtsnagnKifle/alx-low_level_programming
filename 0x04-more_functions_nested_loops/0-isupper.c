#include "main.h"

/**
 * _isupper - check uppercase character
 *
 * Return: 1 if uppercase otherwise 0
 * @c: parameter 1
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
