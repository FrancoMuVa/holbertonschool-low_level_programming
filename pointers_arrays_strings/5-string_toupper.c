#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase.
 * @s: Pointer to string.
 *
 * Return: Type char.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ('z' >= s[i] && 'a' <= s[i])
			s[i] = s[i] - 32;
	}
	return (s);
}
