#include "main.h"

/**
 * _strlen_recursion - using recursion return the length of string
 *
 *Return: return the length of a string
 *@s: string s
 */


int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;

	return (1 + _strlen_recursion(s));
}
