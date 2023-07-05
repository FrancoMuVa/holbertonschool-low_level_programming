#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory.
 * @str: String.
 *
 * Return: Pointer.
 */

char *_strdup(char *str)
{
	int i = 0, c = 0;
	char *p;

	for (c = 0; str[c] != '\0'; c++)

	if (str == NULL)
		return (NULL);

	p = malloc((c) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= c; i++)
		{
			p[i] = str[i];
		}
	}

	return (p);
}
