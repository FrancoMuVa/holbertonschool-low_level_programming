#include "main.h"

/**
 * _memcpy - Copis the memory area.
 * @dest: Pointer.
 * @src: Pointer.
 * @n: Integer.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, c;

	c = n;
	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
