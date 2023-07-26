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
	while (i < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		i += 1;
	}

	if (i == 0)
	{
		tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
	}
	else if (i == index)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	else if (i + 1 == index)
	{
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		free(tmp);
	}
	else
	{
		return (-1);
	}

	return (1);
}
