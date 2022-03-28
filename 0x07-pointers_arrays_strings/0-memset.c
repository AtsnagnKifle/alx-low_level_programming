#include "main.h"

/**
 * *_memset - fill char array with the given char upto n
 *
 *Return: char array
 *@s:char array (String)
 *@b:a char to be placed in array
 *@n:number of char to be replaced by b
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);

}
