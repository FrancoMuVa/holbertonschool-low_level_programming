#include "main.h"

/**
 * factorial - Return the factorial of a number.
 * @n: Integer.
 *
 * Return: Factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
