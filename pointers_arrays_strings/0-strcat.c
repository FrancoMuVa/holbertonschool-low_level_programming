#include "main.h"

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
	char *pdest = dest, *psrc = src;

	for (i = 0; dest[i] != '\0'; i++)
		c++;

	i = 0;
	while (i <= c + 1)
	{
		pdest++;
		i++;
	}

	i = 0;
	while (psrc[i] != '\0')
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		i++;
	}
	pdest[i++] = '\0';

	return (dest);
}
