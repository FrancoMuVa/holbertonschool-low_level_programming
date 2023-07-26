#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning.
 * @head: pointer to pointer.
 * @n: const integer.
 *
 * Return: Address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
