#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two strings.
 * @dest: Pointer string.
 * @src: Pointer string.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	i = 0;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		c++;
	}

	dest[c] = '\0';

	return (dest);
}
