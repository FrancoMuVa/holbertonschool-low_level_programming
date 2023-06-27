#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to a string.
 * @c: Character.
 *
 * Return: Pointer char.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = s;

	while (s[i] != '\0' && s[i] != c)
	{
		p++;
		i++;
	}

	if (*p != c)
		p = NULL;

	return (p);
}
