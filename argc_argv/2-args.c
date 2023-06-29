#include <stdio.h>

/**
 * main - Print all arguments it recives.
 * @argc: Integer.
 * @argv: Array.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
