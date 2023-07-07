#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: String.
 * @s2: String.
 * @n: Integer.
 *
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, ls1 = 0, ls2 = 0, ui, size;
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			ls2++;
	}

	ui = n;
	if (ui > ls2)
		ui = ls2;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ls1++;
	}

	size = ls1 + ui;
	p = malloc((size) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ls1; i++)
		p[i] = s1[i];

	j = 0;
	for (; i < size; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';

	return (p);
}
