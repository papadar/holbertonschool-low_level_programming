#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - return the index of a value within an array
 *
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: - integer - index within the array
 * -1 if not found / invalid request
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array && cmp && size > 0)
	{
		count = 0;
		while (count < size)
		{
			if (cmp(array[count]) != 0)
				return (count);
			count++;
		}
		return (-1);
	}
	else
		return (-1);
}
