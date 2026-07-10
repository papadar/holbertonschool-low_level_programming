#include "main.h"

/**
 * _isalpha - determine if received value is alphanumeric in ascii
 *
 * @a: - a is the value that is received and being checked
 *Return: 1 if alphanumeric, 0 if not
 */
int _isalpha(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	else if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
