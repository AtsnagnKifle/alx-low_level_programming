#include "main.h"
#include<stddef.h>
#include<string.h>

/**
 * *_strspn - strspn
 *
 *Return: int strspn
 *@s:char array (String)
 *@accept:char array (String)
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
