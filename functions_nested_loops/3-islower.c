#include "main.h"

/**
 * _islower - determine if received character is lower case
 *
 * @c: - c is the value that is received and being checked
 *Return: 0 if not lowercase, 1 if lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
