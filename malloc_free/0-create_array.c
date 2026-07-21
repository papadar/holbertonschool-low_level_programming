#include <stdlib.h>
#include "main.h"

/**
 * create_array - initialises an array of memory to the given size
 *
 * @size: the dimension of the array
 * @c: the character to itin with
 *
 * Return: size > 0 pointer to the first char of the array
 * size == 0 pointer to a null character only
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *ar = (char *)malloc(size * sizeof(char));
		unsigned int i;

		i = 0;
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
		return (&ar[0]);
	}
	else
		return (NULL);
}
