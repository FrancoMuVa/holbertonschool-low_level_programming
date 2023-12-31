#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @s: Pointer to string.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
