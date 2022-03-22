#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * *_strcpy - copy from src to dest
 *
 *Return: return the value of dest
 *@dest: parameter
 *@src: parameter
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int n;

	n = strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
