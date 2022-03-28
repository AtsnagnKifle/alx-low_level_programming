#include "main.h"

/**
 * *_memcpy - copy char array from source to destination
 *
 *Return: char array
 *@dest:char array (String)
 *@src:a char to be placed in array
 *@n:number of char to be replaced by b
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
