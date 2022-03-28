#include "main.h"
#include<stddef.h>
#include<string.h>

/**
 * *_strstr - strstr
 *
 *Return: char strspn
 *@haystack:char array (String)
 *@needle:char array (String)
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
