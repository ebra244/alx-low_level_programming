#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees 2 dimensional grid
 * @grid: The address of wo dimensional grid
 * @height: Numbers of rows of an array
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
