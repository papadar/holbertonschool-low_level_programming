#include "main.h"

/**
 * print_line - print the underscore character n times
 *
 * @n: - received value
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
