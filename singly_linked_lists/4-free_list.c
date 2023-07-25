#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list.
 * @head: pointer.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	struct list_s *tmp;

	while (head->next != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
