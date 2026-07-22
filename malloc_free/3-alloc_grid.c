#include "main.h"
#include <stdlib.h>

/**
 * zero_grid - zeros out an int grid
 *
 * @grid: pointer to first element
 * @width: total columns
 * @height: total rows
 *
 * Return: does not return a thing
 */
void zero_grid(int **grid, int width, int height)
{
	int w, h;

	w = 0;
	while (w < width)
	{
		h = 0;
		while (h < height)
		{
			grid[w][h] = 0;
			h++;
		}
		w++;
	}
}

/**
 * alloc_grid - allocates a grid of memory & returns a pointer to a pointer
 *
 * @width: the grid width in rows
 * @height: the height in columns
 *
 * Return: a pointerpointer to the first element
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc((width) * sizeof(*grid));
	if (grid)
	{
		w = 0;
		while (w < width)
		{
			grid[w] = (int *)malloc(height * sizeof(int));
			if (!grid[w])
			{
				while (w >= 0)
				{
					free(grid[w]);
					w--;
				}
				free(grid);
				return (NULL);
			}
			w++;
		}
	}
	else
	{
		free(grid);
		return (NULL);
	}
	zero_grid(grid, width, height);
	return (grid);
}
