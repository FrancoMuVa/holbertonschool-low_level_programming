#include "lists.h"

/**
 * sum_dlistint - Sum all of data (n) of a linked list.
 * @head: pointer.
 *
 * Return: Sum of all (n).
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	struct dlistint_s *tmp;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp->next != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	sum += tmp->n;

	return (sum);
}
