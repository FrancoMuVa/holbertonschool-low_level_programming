#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Integer.
 * @size: Integer.
 *
 * Return: Pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc((nmemb) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)p)[i] = 0;

	return (p);
}
