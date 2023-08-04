#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: the key.
 *
 * Return: Value associated with the element (Success), NULL otherwist.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (strcmp(key, "") == 0 || !ht || !key)
		return (NULL);

	idx = (hash_djb2((const unsigned char *)key) % ht->size);

	tmp = ht->array[idx];

	if (!tmp)
		return (NULL);

	while (strcmp(tmp->key, key) && tmp != NULL)
		tmp = tmp->next;

	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}
