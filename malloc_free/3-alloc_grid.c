#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a dimentional array of integers.
 * @width: Integer.
 * @height: Integer.
 *
 * Return: Pointer.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width == 0 || width < 1 || height == 0 || height < 1)
		return (NULL);

	else
	{
		p = malloc((height) * sizeof(int *));

		if (p == NULL)
			return (NULL);

		else
		{
			for (; i < height; i++)
			{
				p[i] = malloc((width) * sizeof(int));
				if (p[i] == NULL)
				{
					for (j = i; j >= 0; j--)
					{
						free(p[j]);
					}
					free(p);
				}
			}

			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					p[i][j] = 0;
				}
			}
		}
	}
	return (p);
}
