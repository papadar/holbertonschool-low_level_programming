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
	int c, v, b;

	c = v = 0;
	b = 1;
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
				v = (v * b);
				return (v);
			}
		}
		c++;
	}
	v = (v * b);
	return (v);
}
