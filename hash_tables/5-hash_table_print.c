#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		if (tmp != NULL)
		{
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp->next != NULL)
					printf(", ");
			}
		}
	}
	printf("}");
}
