#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * arg_isdigit - Check digits.
 * @str: string.
 *
 * Return: 0.
 */

int arg_isdigit(char *str)
{
	int j = 0;

	while (str[j] != '\0' && isdigit(str[j]) != 0)
		j++;

	if (str[j] == '\0')
		return (0);
	else
		return (1);
}

/**
 * main - Prints adds of numbers.
 * @argc: Integer.
 * @argv: Array.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, it, sum = 0;

	if (argc > 1)
	{
		it = 0;
		i = 1;
		while (i < argc && it != 1)
		{
			it = arg_isdigit(argv[i]);
			i++;
		}

		if (it != 1)
		{
			for (i = 1; i < argc; i++)
			{
				sum = sum + atoi(argv[i]);
			}

			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	else if (argc == 1)
	{
		printf("0\n");
	}

	return (0);
}
