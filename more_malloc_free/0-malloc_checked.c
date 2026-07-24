#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory & check
 *
 * @b: the number of bytes to allocate
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	if (b > 0)
	{
		block = malloc(b);
		if (!block)
		{
			exit(98);
		}
		return (block);
	}
	else
	{
		return (NULL);
	}
}
