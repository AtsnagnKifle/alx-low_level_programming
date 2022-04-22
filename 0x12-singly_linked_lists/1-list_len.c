#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of a list_t list
 *
 * @h: pointer
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}
