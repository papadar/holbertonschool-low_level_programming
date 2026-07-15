#include "main.h"

/**
 * _strncat - Concatenate two strings up to n bytes only
 *
 * @dest: destination poiter received
 * @src: source pointer received
 * @n: number of bytes to quit at
 *
 * Return: a point to a new string that is
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[c] != '\0')
	{
		dest[d + c] = src[c];
		c++;
		if (c == n)
		{
			return (dest);
		}
	}
	dest[d + c] = '\0';
	return (dest);
}
