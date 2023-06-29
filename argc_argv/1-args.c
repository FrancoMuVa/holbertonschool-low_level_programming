#include <stdio.h>

/**
 * main - Prints the numbers of arguments.
 * @argc: Integer.
 * @argv: Char.
 *
 * Return: 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
