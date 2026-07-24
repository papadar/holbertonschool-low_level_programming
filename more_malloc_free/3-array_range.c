#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates an array of memory & fills with values
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a void pointer to the first element
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int length, count;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	array = malloc(length * sizeof(int));
	if (!array)
	{
		return (NULL);
	}
	count = 0;
	while (count < length)
	{
		array[count] = min + count;
		count++;
	}
	return (array);
}
