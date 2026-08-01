#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings
 * @separator: what is between the ints
 * @n: number of them
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list List;
	unsigned int i;

	i = 0;
	va_start(List, n);
	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		printf("%s", va_arg(List, char*));
		if (i + 1 < n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(List);
}
