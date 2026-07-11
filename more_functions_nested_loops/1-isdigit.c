#include "main.h"

/**
 * _isdigit -determine if received character is a digit 0-9
 *
 * @c: - c is the value that is received and being checked
 *
 * Return: 0 if not a digit, 1 if a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
