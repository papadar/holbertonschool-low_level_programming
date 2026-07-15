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
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		if (c < n)
			dest[c] = src[c];
		c++;
	}
	if (src[c] == '\0')
		dest[c] = '\0';
	return (dest);
}
