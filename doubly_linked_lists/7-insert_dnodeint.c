#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Adds a new node at a given position.
 * @h: pointer to pointer.
 * @idx: unsigned int.
 * @n: int.
 *
 * Return: Address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	struct dlistint_s *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}

	tmp = *h;
	while (i < idx && tmp->next != NULL)
	{
		tmp = tmp->next;
		i += 1;
	}

	if (i == idx)
	{
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev = new;
		tmp = new->prev;
		tmp->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
