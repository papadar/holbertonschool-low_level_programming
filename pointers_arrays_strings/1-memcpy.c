#include "main.h"

/**
 * _memcpy - copies n bytes of memory
 *
 * @src: pointer to source start
 * @dest: pointer to destination start
 * @n: number of bytes to copy
 *
 * Return: pointer back to the same string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
