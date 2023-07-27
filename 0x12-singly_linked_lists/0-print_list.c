#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked
 * @h: pointer to the list_t list to print
 * Auth: Dawa
 * Return: the number of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t s  = 0;

	while (h)
	{
		if (!h->str)
		
			printf("[0] (nil)\n");
		

		else

			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		s++;
	}

	return (s);

}
