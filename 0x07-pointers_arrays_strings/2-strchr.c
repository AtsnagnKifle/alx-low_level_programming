#include "main.h"
#include<stddef.h>

/**
 * *_strchr - find the first occurence of a char c in the char of array
 *
 *Return: char array
 *@s:char array (String)
 *@c:a char to be searched in the array
 */


char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);

}
