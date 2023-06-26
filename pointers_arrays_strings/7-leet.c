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
			if (s[i] - 32 == let[j] || s[i] == let[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
