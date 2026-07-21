#include <stdlib.h>
#include "main.h"

/**
 * create_array - initialises an array of memory to the given size
 *
 * @size: the dimension of the array
 * @c: the character to itin with
 *
 * Return: pointer to the first char of the array
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i;

	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (&ar[0]);
}
