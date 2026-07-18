#include "main.h"

/**
 * string_toupper - converts string to capitals
 *
 * @s: received pointer to string
 *
 * Return: pointer back to the same string
 */
char *string_toupper(char *s)
{
	char l;
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		l = s[c];
		if (l >= 'a' && l <= 'z')
			s[c] = l - 32;
		c++;
	}
		return (*s);
}