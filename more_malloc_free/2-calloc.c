#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates an array of memory & returns a pointer to the start
 *
 * @nmemb: size of the member type
 * @size: the number of members
 *
 * Return: a void pointer to the first element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *grid;
	unsigned int count;

	if (nmemb == 0 || sizeof(nmemb) == 0 || size == 0)
		return (NULL);
	grid = malloc(nmemb * size);
	if (!grid)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		((unsigned char *)grid)[count] = 0;
		count++;
	}
	return (grid);
}
