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


	if (97 <= s[0] && 122 >= s[0])
		s[0] = s[0] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (97 <= s[i] && 122 >= s[i])
		{
			j = -1;
			while (j <= 13 && s[i] != arr[j])
			{
				j++;
				if (s[i - 1] == arr[j])
					s[i] = s[i] - 32;
			}
		}
		i++;
	}

	return (s);
}
