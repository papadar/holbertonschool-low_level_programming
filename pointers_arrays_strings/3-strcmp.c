#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: string 1 pointer received
 * @s2: string 2 pointer received
 *
 * Return: a value that indicates the 'alikeness' of the two
 */
int _strcmp(char *s1, char *s2)
{
	int c, v;

	c = 0;
	while (s1[c] != '\0' || s2[c] != '\0')
	{
		v = (s1[c] - s2[c]);
		if (v != 0)
			return (v);
		c++;
	}

	return (0);
}
