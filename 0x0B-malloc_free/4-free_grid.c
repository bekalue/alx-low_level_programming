#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: two dimentional array.
 * @height: number of height(rows) to be free.
 */
void free_grid(int **grid, int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	return (grid);
}
