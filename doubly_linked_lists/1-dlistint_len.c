#include "lists.h"

/**
 * dlistint_len - Counts the numbers of elements of a doubly linked list.
 * @h: pointer.
 *
 * Return: Numbers of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements += 1;
	}

	return (elements);
}
