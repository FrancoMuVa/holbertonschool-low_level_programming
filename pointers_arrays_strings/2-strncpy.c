#include "main.h"

/**
 * _strncpy - Copy n bytes of src to dest.
 * @dest: Pointer to string.
 * @src: Pointer to string.
 * @n: Integer.
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
