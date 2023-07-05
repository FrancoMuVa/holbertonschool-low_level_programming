#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array.
 * @size: Integer.
 * @c: Char.
 *
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0, m = 0;
	char *p;

	p = malloc((size) * sizeof(char));

	if (size == 0 || p == NULL)
	{
		p = NULL;
	}
	else if (p != NULL)
	{
		m = size;
		for (i = 0; i <= m; i++)
		{
			p[i] = c;
		}
	}

	return (p);
}
