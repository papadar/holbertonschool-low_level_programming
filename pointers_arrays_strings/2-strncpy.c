#include "main.h"

/**
 * _strncpy - Copies n bytes of a string
 *
 * @dest: destination pointer received
 * @src: source pointer received
 * @n: number of bytes to quit at
 *
 * Return: a point to a new string that is
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c, f;

	c = f = 0;
	while (c < n)
	{
		if (src[c] == '\0')
			f = 1;
		if (f != 1)
			dest[c] = src[c];
		else
			dest[c] = '\0';
		c++;
	}

	return (dest);
}
