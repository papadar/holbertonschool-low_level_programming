#include "main.h"

/**
 * _pow_recursion - return x to the power of y
 * @x: the x value
 * @y: the y value
 * Return: the result - an int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	if (y > 1)
		return (x * (_pow_recursion(x, y - 1)));
	return (x);
}
