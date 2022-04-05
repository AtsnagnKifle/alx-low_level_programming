#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * *_strdup - return pointer to a newly alloc mem
 *
 *@str: given string
 *Return: null if str null else return pointer
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *cp;

	len = strlen(str);

	if (str == NULL)
		return (NULL);
	cp = (char *)malloc(sizeof(char) * len + 1);
	if (cp == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';

	return (cp);
}
