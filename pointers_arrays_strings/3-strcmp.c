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
	int i, str1, str2;

	for (i = 0; s1[i] != '\0'; i++)
		str1 = i;

	for (i = 0; s2[i] != '\0'; i++)
		str2 = i;

	if (str1 == str2)
		return (0);

	else if (str1 < str2)
		return(-1);
	else
		return(1);
}
