#include "hash_tables.h"

/**
 * _free - function to free a node.
 * @node: node.
 *
 * Return: Nothing.
 */

void _free(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

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
	hash_node_t *tmp, *new = malloc(sizeof(hash_node_t));

	if (!new || strcmp(key, "") || key == NULL || ht == NULL)
		return (0);

	hash = (hash_djb2((const unsigned char *)key) % ht->size);

	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;

	if (ht->array[hash] == NULL)
		ht->array[hash] = new;
	else
	{
		tmp = ht->array[hash];
		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next;
			ht->array[hash] = new;
			_free(tmp);
			return (1);
		}
		while (tmp->next != NULL && strcmp(tmp->next->key, key) != 0)
			tmp = tmp->next;
		if (strcmp(tmp->key, key) == 0)
		{
			new->next = tmp->next->next;
			_free(tmp->next);
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
