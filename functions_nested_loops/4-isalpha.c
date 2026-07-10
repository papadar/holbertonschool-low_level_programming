#include "main.h"

/**
 * _isalpha - determine if received value is a character in ascii
 *
 * @a: - a is the value that is received and being checked
 *Return: 1 if alphabetical, 0 if not
 */
int _isalpha(int a)
{
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
