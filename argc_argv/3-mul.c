#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Integer.
 * @argv: Array.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc - 1 == 2)
	{
		n1 = atoi(argv[2]);
		n2 = atoi(argv[1]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
