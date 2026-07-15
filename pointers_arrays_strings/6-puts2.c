#include "main.h"

/**
 * puts2 - prints every 2nd character of a provided string
 *
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
