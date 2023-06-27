#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: Poiniter to string.
 * @accept: Pointer to string.
 *
 * Return: Pointer to char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag = 0;
	char *p = s;

	i = 0;
	while (s[i] != '\0' && flag == 0)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		i++;
	}
	p = (p + i) - 1;
	return (p);
}
