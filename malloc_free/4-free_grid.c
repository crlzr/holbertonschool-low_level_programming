#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-dimensional grid
 * @grid: the array
 * @height: height of grid
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
