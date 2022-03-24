#include<string.h>
#include "main.h"

/**
 * _strncpy - copies strings
 *
 * Return: return a string
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 */

char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

	return (dest);
}
