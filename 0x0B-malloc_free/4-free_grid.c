#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: A pointer to the 2D array of integers.
 * @height: The height of the grid.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]); /* Free each row */

	free(grid); /* Free the array of pointers */
}
