#include "main.h"

/**
 * _puts - prints a string and a new line
 *
 * @str: received pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
