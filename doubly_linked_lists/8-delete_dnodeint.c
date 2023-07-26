#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at the index of a linked list.
 * @head: pointer to pointer.
 * @index: constant integer.
 *
 * Return: 1 if success, -1 otherwhithe.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	struct dlistint_s *tmp = *head;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i += 1;
	}

	if (i == index)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	else
		return (-1);
}
