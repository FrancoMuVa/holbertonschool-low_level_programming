#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to string.
 * @needle: Pointer to string.
 *
 * Return: Pointer type char.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, c;
	char *s = haystack;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		c = i;
		while (needle[j] != '\0' && haystack[c] == needle[j])
		{
			c++;
			j++;
		}
		if (needle[j] == '\0')
			break;

		i++;
		s++;
	}

	if (haystack[i] == '\0')
		s = NULL;

	return (s);
}
