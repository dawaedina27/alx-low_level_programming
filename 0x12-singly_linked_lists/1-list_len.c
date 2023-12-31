#include <stdio.h>
#include "lists.h"

/**
 * list_len - returnz the number of elements in a linked list
 * @h: pointer to the list_t list
 * By Dawa Edina
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
