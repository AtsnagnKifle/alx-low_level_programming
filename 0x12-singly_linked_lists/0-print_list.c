#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 *
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		counter++;
		temp = temp->next;
	}

	return (counter);
}
