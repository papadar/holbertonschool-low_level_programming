#include "main.h"

/**
 * print_sign - prints the sign of the received value
 *
 * @n: - n is the value that is received and checked
 *
 *Return: 1 positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
