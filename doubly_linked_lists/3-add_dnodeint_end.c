#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node to the end.
 * @head: pointer to pointer.
 * @n: constant integer.
 *
 * Return: Address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *tmp = *head;
		dlistint_t *new = malloc(sizeof(dlistint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			new->prev = NULL;
			*head = new;
			return (new);
		}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
