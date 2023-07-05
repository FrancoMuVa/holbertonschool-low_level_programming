#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: Char.
 * @s2: Char.
 *
 * Return: Pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, ls1 = 0, ls2 = 0, size;
	char *p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (; s1[ls1] != '\0'; ls1++)
		;

	for (; s2[ls2] != '\0'; ls2++)
		;

	p = malloc((ls1 + ls2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	size = ls1 + ls2;
	for (i = 0; i < ls1; i++)
	{
		p[i] = s1[i];
	}

	j = i;
	i = 0;
	while (i < size)
	{
		p[j] = s2[i];
		j++;
		i++;
	}
	p[j] = '\0'; 

	return (p);
}
