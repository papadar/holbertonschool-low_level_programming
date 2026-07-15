#include "main.h"

/**
 * puts_half - prints the 2nd half of a provided string
 *
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int c, h;

	c = h = 0;
	while (str[c] != '\0')
		c++;
	if (c % 2 == 1)
		h = (c / 2) + 1;
	else
		h = (c / 2);
	while (str[h] != '\0')
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
