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
	char *pdest = dest, *psrc = src;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	c--;
	i = 0;
	while (i <= c)
	{
		pdest++;
		i++;
	}

	i = 0;
	while (i < n && psrc[i] != '\0')
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		i++;
	}

	return (dest);
}
