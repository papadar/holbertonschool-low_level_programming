#include "main.h"

/**
 * _isupper -determine if received character is upper case A-Z
 *
 * @c: - c is the value that is received and being checked
 *
 * Return: 0 if not uppercase, 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
