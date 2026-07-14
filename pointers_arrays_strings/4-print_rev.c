#include "main.h"

/**
 * print_rev - prints a reversed string and a new line
 *
 * @s: received pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	while (c > 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
