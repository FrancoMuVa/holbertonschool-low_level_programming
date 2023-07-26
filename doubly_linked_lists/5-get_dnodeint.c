#include "lists.h"

/**
 * get_dnodeint_at_index - get a nth node of a doubly linked list.
 * @head: pointer.
 * @index: unsigned integer.
 *
 * Return: Node nth.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	struct dlistint_s *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (n < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		n += 1;
	}

	if (tmp->next != NULL)
		return (tmp);
	else
		return (NULL);
}
