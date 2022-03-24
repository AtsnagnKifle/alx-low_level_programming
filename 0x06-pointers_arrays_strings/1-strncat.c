#include<string.h>
#include "main.h"

/**
 * _strncat - it concatenates two strings
 *
 * Return: return a string
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);

	return (dest);
}
