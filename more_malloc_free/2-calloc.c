#include "main.h"
#include <stdlib.h>

/**
 * zero_array - zeros out an array
 *
 * @grid: pointer to first element
 * @depth: total items
 *
 * Return: does not return a thing
 */
void zero_array(int *grid, int depth)
{
	int d;

	d = 0;
	while (d < depth)
	{
		grid[d] = 0;
		d++;
	}
}

/**
 * _calloc - allocates an array of memory & returns a pointer to the start
 *
 * @nmemb: the member type
 * @size: the number of members
 *
 * Return: a void pointer to the first element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *grid;

	if (sizeof(nmemb) == 0 || size == 0)
		return (NULL);
	grid = malloc(size * sizeof(nmemb));
	if (!grid)
	{
		return (NULL);
	}
	zero_array(grid, size);
	return (grid);
}
