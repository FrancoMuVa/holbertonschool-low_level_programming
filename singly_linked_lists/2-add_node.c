#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function to add a new node at the beginning.
 * @head: pointer to pointer.
 * @str: string.
 *
 * Return: Address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
