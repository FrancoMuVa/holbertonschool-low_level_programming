#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string.
 * @s: Pointer to string.
 *
 * Return: Type char.
 */

char *leet(char *s)
{
	char num[5] = {"43071"};
	char let[5] = {"aeotl"};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 4; j++)
		{
/*			printf("s[i] - 32: %c| let[j]: %c\n", s[i] - 32, let[j]);*/
			if (s[i] == let[j] || s[i] == let[j] - 32)
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
