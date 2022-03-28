#include "main.h"
#include<stddef.h>
#include<string.h>

/**
 * *_strchr - find the first occurence of a char c in the char of array
 *
 *Return: char array
 *@s:char array (String)
 *@c:a char to be searched in the array
 */


char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
