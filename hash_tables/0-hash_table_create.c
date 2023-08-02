#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash tables.
 * @size: size of array.
 *
 * Return: Pointer to the newly hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t *) * size);

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = arr;

	while (i < size)
		new_table->array[i++] = NULL;

	return (new_table);
}
