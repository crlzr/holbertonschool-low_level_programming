#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2-dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure, 0 or negative NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid = 0;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (j < i)
			{
		/* free memory of previously allocated row to avoid memory leaks */
				free(grid[j]);
				j++;
			}
		}
		/**
		 *  if malloc succeeds, function initialises
		 * both to 0 to iterate each row and col
		 */

		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
