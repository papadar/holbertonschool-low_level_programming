#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums them all
 * @n: number of them
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list List;
	int total;
	unsigned int i;

	va_start(List, n);
	total = i = 0;
	while (i < n)
	{
		total += va_arg(List, int);
		i++;
	}
	va_end(List);
	return (total);
}
