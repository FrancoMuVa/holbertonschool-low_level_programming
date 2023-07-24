#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list.
 * @h: pointer to the list.
 *
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		elements += 1;
		h = h->next;
	}
	return (elements);
}
