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
	char arr[13] = {32, 9, '\n', ',', ';', '.',
					'!', '?', '"', '(', ')', '{', '}'};

	for (i = 1; s[i] != '\0'; i++)
	{
		if (97 <= s[i] && 122 >= s[i])
		{
			j = 0;
			while (j <= 13)
			{
				if (s[i - 1] == arr[j])
					s[i] = s[i] - 32;
				j++;
			}
		}
		i++;
	}

	return (s);
}
