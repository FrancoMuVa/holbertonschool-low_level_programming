#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies string in buffer.
 * @dest: Pointer buffrr.
 * @src: Pointer string.
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, c;
	char *cpy = dest, *orig = src;

	c = 0;
	for (i = 0; src[i] != '\0'; i++)
		c++;


	if (c > 0)
	{
		for (i = 0; i <= c; i++)
		{
			*cpy = *orig;
			cpy++;
			orig++;
		}
		cpy++;
		*cpy = '\0';
	}

	return (dest);
}
