#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a node at the end of the list.
 * @head: pointer to pointer.
 * @str: string.
 *
 * Return: Address of the new element (Success). NULL otherwise.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t *));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	struct list_s *tmp = *head;

	while (tmp != NULL)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
