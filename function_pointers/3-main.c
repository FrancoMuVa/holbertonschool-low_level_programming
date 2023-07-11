#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main.
 * @argc: Contador.
 * @argv: Array.
 *
 * Return: Integer.
 */

int main(int argc, char *argv[])
{
	int a, b, d;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if (get_op_func(argv[2]) == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		d = get_op_func(argv[2])(a, b);
		printf("%d\n", d);
		return (0);
	}

	printf("Error\n");
	exit(98);
}
