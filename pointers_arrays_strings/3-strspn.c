#include "main.h"

/**
 * _strspn - Gets a length of a prefix substring.
 * @s: Pointer to string.
 * @accept: Pointer to string.
 *
 * Return: Length in unsigned int type.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag = 1;
	unsigned int byte = 0;

	i = 0;
	while (s[i] != '\0' && flag == 1)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				byte++;
				flag = 1;
				break;
			}
			else
				flag = 0;
			j++;
		}
		i++;
	}

	return (byte);
}
