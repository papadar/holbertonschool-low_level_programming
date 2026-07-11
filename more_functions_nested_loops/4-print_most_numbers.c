#include "main.h"

/**
 * print_numbers - print character set 0-9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c!= '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
