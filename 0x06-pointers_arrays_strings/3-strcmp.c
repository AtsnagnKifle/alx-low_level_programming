#include<string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * Return: return int
 *@s1: parameter
 *@s2: parameter
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = strcmp(s1, s2);

	return (cmp);
}
