#include "main.h"

/**
 * cap_string - Capitalizes all words.
 * @s: Pointer to string.
 *
 * Return: Type char.
 */

char *cap_string(char *s)
{
	int i, j;
	char arr[13] = {' ', '	', 10, ',', ';', '.',
					'!', '?', '"', '(', ')', '{', '}'};


	if ('a' <= s[0] && 'z' >= s[0])
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if ('a' <= s[i] && 'z' >= s[i])
		{
			for (j = 0; j <= 12; j++)
			{
				if (s[i - 1] == arr[j])
					s[i] = s[i] - 32;
			}
		}
		i++;
	}

	return (s);
}
