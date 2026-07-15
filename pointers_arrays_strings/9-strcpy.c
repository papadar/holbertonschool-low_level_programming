#include <stdio.h>

/**
 * _strcpy - copies a string
 *
 * @dest: the destination
 * @src: the source
 *
 * Return: a character..
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];

	return (dest);
}
