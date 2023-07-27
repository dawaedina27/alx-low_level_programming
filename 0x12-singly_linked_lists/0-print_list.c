#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked
 * @h: pointer to the list_t list to print
 *
 * Return: the number of printed nodes
 */

size_t print_list(const list_t *h)
{
	int s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		s++;
	}

	return (s);

}
