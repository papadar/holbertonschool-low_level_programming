#include "main.h"

/**
 * leet - converts a string to leetspeak
 *
 * @s: received pointer to string
 *
 * Return: pointer back to the same string
 */
char *leet(char *s)
{
	char str0[] = "aAeEoOtTlL";
	char str1[] = "4433007711";
	int c, d;

	c = d = 0;
	while (s[c] != '\0')
	{
		d = 0;
		while (d < 10)
		{
			if (s[c] == str0[d])
			{
				s[c] = str1[d];
			}
			d++;
		}
		c++;
	}
	return (s);
}
