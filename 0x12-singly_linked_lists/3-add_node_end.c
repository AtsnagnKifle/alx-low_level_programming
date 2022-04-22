#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * *add_node_end - adds a new node at the end of a linked list.
  * @head: start of the list.
  * @str: string.
  * Return: the address of the new element,
  * or null if it failed.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}
