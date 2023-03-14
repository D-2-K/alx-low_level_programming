#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid being freed
 * @height: height of grid
 *
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || height == 0)
		return (0);

	for (y = 0; y < height; y++)
		free(grid[y]);

	free(grid);
}
