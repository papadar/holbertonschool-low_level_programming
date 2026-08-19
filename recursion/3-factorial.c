#include "main.h"

/**
 * factorial - determine the factorial of n
 * @n: the value to factor
 * Return: int value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}
