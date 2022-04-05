#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int n;
	char *new_str;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(sizeof(char) * n);

	if (new_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
