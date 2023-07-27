#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *last = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	if (new->str)
		while (str[i])
			++i;

	new->len = i;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = new;

	}

	else
		*head = new;
	return (new);
}
