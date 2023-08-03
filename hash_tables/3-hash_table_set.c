#include "hash_tables.h"

/**
 * hash_table_set - adds an elements to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: pointer.
 *
 * Return: 1 (Success), 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *tmp;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new || strcmp(key, "") || key == NULL || ht == NULL)
		return (0);
	hash = (hash_djb2((const unsigned char *)key) % ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (!ht->array[hash])
		ht->array[hash] = new;
	else
	{
		tmp = ht->array[hash];
		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next;
			ht->array[hash] = new;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		while (tmp->next != NULL && strcmp(tmp->next->key, key) != 0)
			tmp = tmp->next;
		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next->next;
			free(tmp->next->key);
			free(tmp->next->value);
			free(tmp->next);
			tmp->next = new;
		}
		else
		{
			new->next = ht->array[hash];
			ht->array[hash] = new;
		}
	}
	return (1);
}
