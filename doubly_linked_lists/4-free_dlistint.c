#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	struct dlistint_s *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
