#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t.
 * @h: pointer.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);
}
