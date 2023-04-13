#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers,
 * each element initialized to 0
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to a 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
