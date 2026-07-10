#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 *Return: void
 */
void print_alphabet(void)
{
	char c;
	char z;

	c = 'a';
	z = 'z';

	while (c <= z)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
