#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previously allocated grid
 *
 * @grid: pointerpointer to first grid element
 * @height: height of grid
 *
 * Return: nothing nada
 */
void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
