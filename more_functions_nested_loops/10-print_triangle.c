#include "main.h"

/**
 * print_triangle - print a new line and hash  n times
 * in order to display a right justified triangle
 *
 * @size: - received value defines the dimensions
 *
 * Return: void
 */
void print_triangle(int size)
{
	int total;
	int width;
	int tri;

	total = size;
	while (size > 0)
	{
		width = total;
		tri = size - 1;
		while (width > 0)
		{
			if (tri > 0)
			{
				_putchar(' ');
				tri--;
			}
			else
			{
				_putchar('#');
			}
			width--;
		}
		if (size > 1)
			_putchar('\n');
		size--;
	}
	_putchar('\n');
}
