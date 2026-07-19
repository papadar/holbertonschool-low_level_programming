#include "main.h"

/**
 * _strchr - find a given character in a string
 *
 * @s: pointer to a string
 * @c: character to find
 *
 * Return: pointer to the first character or null
 */
char *_strchr(char *s, char c)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		if (s[n] == c)
			return (&s[n]);
		n++;
	}
	return ('\0');
}
