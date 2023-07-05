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

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;
	p = malloc((c + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= c; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
