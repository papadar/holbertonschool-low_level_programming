#include "main.h"

/**
 * _memset - sets m bytes of memory to the provided char
 *
 * @s: received pointer to location to begin
 * @b: character to write with
 * @n: number of bytes to write
 *
 * Return: pointer back to the same string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
