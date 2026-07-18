#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of ints
 *
 * @a: pointer to an int array
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c, v;

	c = v = 0;
	while (c < n / 2)
	{
		v = a[c];
		a[c] = a[n - c - 1];
		a[n - c] = v;

		c++;
	}
}
