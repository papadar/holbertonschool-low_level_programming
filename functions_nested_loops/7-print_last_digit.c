#include "main.h"

/**
 * print_last_digit - Returns the last digit of the received input
 *
 * @n: - n is the value that is received
 *
 *Return: the least significnt digit
 */
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
