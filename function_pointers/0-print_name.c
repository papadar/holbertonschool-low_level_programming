#include "function_pointers.h"

/**
 * print_name - prints a name using a pointer..
 *
 * @name: pointer to a char (string implied)
 * @f: pointer to a function
 *
 * Return: - void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
