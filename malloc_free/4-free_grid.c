#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimentional grid.
 * @grid: Pointer to a Pointer.
 * @height: Integer.
 *
 */

void free_grid(int **grid, int height)
{
	int i = height;

	if (grid == NULL)
		return;

	else
	{
		for (; i >= 0; i--)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
