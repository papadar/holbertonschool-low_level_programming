#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: pointer to an array
 * @size: size of array
 * @action: the function to apply to the array
 *
 * Return: - void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array)
	{
		count = 0;
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}
