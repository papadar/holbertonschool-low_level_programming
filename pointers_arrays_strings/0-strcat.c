#include "main.h"

/**
 * _strcat - Concatenate two strings
 *
 * @dest: destination poiter received
 * @src: source pointer received
 *
 * Return: a point to a new string that is
 */
char *_strcat(char *dest, char *src)
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
	}
	dest[d + c] = '\0';
	return (dest);
}
