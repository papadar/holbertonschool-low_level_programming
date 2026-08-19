#include "main.h"

/**
 * _print_rev_recursion - function to recursively print a string
 * @s: pointer to the string
 * Return: void always and forever
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
