#include "main.h"
#include <limits.h>

/**
 * _sqr - square a value and return
 * @s: start at 1 and go up
 * @n: received value
 * Return: squared value
 */

int _sqr(int s, int n)
{
	if (s * s > INT_MAX)
		return (-1);
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	if (s * s < n)
		return (_sqr(s + 1, n));
	return (-1);
}

/**
 * _sqrt_recursion - discover a sqareroot using recusrion
 * @n: value to find the square root of
 * Return: the square root, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (_sqr(1, n));
}
