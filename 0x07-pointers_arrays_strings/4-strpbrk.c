#include "main.h"
#include<stddef.h>
#include<string.h>

/**
 * *_strpbrk - strpbrk
 *
 *Return: int strspn
 *@s:char array (String)
 *@accept:char array (String)
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
