#include "main.h"

/**
 * _memset - Fills memory whith a constant byte.
 * @s: Pointer to string.
 * @b: Char.
 * @n: Unsigned int.
 *
 * Return: Pointer to string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, c;

	c = n;
	for (i = 0; i < c; i++)
	{
		s[i] = b;
	}


	return (s);
}
