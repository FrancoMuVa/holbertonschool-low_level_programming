#include "hash_tables.h"

/**
 * key_index - Index of a key.
 * @key: pointer.
 * @size: ULINT.
 *
 * Return: index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
