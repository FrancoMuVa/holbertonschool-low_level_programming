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
	int i;
	char *pdest = dest, *psrc = src;

	for (i = 0; pdest[i] != '\0'; i++)
		pdest++;

	pdest++;
	pdest++;
	pdest++;
	for (i = 0; src[i] != '\0'; i++)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	pdest[i++] = '\0';

	return (dest);
}
