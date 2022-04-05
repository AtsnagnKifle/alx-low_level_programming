#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array
 *
 *Return: null if size 0 else pointer to array
 *@size: size of array
 *@c: character
 */

char *create_array(unsigned int size,char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

}
