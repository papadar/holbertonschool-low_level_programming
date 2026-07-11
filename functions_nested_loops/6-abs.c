#include "main.h"

/**
 * _abs - calculates the absolute value of the received input
 *
 * @n: - n is the value that is received
 *
 *Return: the positive version of the value that was received
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
