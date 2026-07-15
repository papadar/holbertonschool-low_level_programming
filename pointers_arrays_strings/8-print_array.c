#include <stdio.h>

/**
 * print_array - prints the contents of an array
 *
 * @a: the array provided
 * @n: the size of the array?
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		printf("%d", c[a]);
		if (c < (n - 1))
			printf(", ");
		c++;
	}
	printf("\n");
}
