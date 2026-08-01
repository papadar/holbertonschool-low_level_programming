#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers
 * @separator: what is between the ints
 * @n: number of them
 * Return: int sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list List;
	unsigned int i;

	i = 0;
	va_start(List, n);
	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		printf("%d", va_arg(List, int));
		if (i + 1 < n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(List);
}
