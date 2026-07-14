#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: received pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c, z;

	z = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	char temp_str[c];i

	while (z < c)
	{
		temp_str[z] = s[c - z];
		z++;
	}
	z = 0;
	temp_str{c} = '\0';
}
