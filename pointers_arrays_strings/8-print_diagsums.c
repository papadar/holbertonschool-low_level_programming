#include <stdio.h>

/**
 * print_diagsums - calculates and prints the sums of two diagonals
 * from a provided 'square' 2d array
 *
 * @a: pointer to the first value within the array
 * @size: width and height of the 2d array
 *
 * Return: does not return anything
 */
void print_diagsums(int *a, int size)
{
	int c, s0, s1;

	c = s0 = s1 = 0;
	while (c < (size))
	{
		s0 += a[c * size + c];
		s1 += a[c * size + (size - 1 - c)];
		c++;
	}
	printf("%d, %d\n", s0, s1);
}
