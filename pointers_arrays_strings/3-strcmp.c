#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: Pointer to string.
 * @s2: Pointer to string.
 *
 * Return: Always 0. (Sucsccess)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	if (i < j)
		return (-1);

	else if (i > j)
		return (1);

	return (0);
}
