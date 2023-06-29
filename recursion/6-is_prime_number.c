#include "main.h"

/**
 * is_prime - Search the prime.
 * @x: Integer.
 * @d: Integer.
 *
 * Return: Integer.
 */

int is_prime(int x, int d)
{
	if (x == d)
		return (1);

	else if (x % d == 0)
		return (0);

	else
		return (is_prime(x, d + 1));
}

/**
 * is_prime_number - Returns 1 if the number is prime.
 * @n: Integer.
 *
 * Return: 1 if is prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (is_prime(n, 2));
}
