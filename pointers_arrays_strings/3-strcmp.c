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
	int i = 0, j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (i < j)
		return (13);

	else if (i > j)
		return (-13);

	return (0);
}
