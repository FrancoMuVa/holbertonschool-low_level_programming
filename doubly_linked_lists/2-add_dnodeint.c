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

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
