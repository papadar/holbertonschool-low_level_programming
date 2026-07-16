#include <stdio.h>

/**
 * _atoi - find and print an integer within a given string
 *
 * @s: the provided string
 *
 * Return: the integer that was found
 */
int _atoi(char *s)
{
	int c, b;
	unsigned int v;

	c = 0;
	b = 1;
	v = 0;
	while (s[c] != '\0')
	{
		if (s[c] == '-')
			b *= -1;
		else if (s[c] >= '0' && s[c] <= '9')
			v = (v * 10) + (s[c] - '0');
		else if (s[c] < '0' || s[c] > '9')
		{
			if (v > 0)
			{
				return (v * b);			}
			}
		c++;
	}
	return (v * b);
}
