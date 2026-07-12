#include "main.h"

/**
 * print_diagonal - print a new line and slash n times
 *
 * @n: - received value
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int m;

	m = n;
	while (n > 0)
	{
		int s;

		s = m - n;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		_putchar('\\');
		if (n > 1)
			_putchar('\n');
		n--;
	}
	_putchar('\n');
}
