#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: received pointer to string
 *
 * Return: Int length of string
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}
