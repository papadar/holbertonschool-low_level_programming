#include "main.h"

/**
 * _puts_recursion - put a string with recursion
 * @s: pointer to a string
 * Return: void always and forever
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
