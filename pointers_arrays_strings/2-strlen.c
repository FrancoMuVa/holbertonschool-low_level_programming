#include "main.h"

/**
 * _strlen - Print length of a string
 * @s: String pointer.
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
