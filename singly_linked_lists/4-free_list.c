#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - Frees a linked list.
 * @head: pointer.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	struct list_s *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		if (tmp->str != NULL)
			free(tmp->str);
		free(tmp);
	}
	free(head);
}
