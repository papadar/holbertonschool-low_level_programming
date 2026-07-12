#include "main.h"

/**
 * print_square - print a square of # size
 *
 * @size: - received value
 *
 * Return: void
 */
void print_square(int size)
{
	int width;

	width = size;
	while (size > 0)
	{
		int w;

		w = width;
		while (w > 0)
		{
			_putchar('#');
			w--;
		}
		if (size > 1)
			_putchar('\n');
		size--;
	}
	_putchar('\n');
}
