#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenete two strings.
 * @dest: Pointer to string.
 * @src: Pointer to string,
 * @n: integer.
 *
 * Return: Pointer type char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		c++;
	}

	return (dest);
}
