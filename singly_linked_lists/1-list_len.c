#include "lists.h"

/**
 * list_len - Counts the number of elements of a linked list.
 * @h: pointer to structur.
 *
 * Return: Number of elements of a linked list.
 */

size_t list_len(const list_t *h)
{
	int elem = 0;

	while (h != NULL)
	{
		elem += 1;
		h = h->next;
	}

	return (elem);
}
