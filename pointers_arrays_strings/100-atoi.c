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

	c = v = b = 0;
	while (s[c] != '\0')
	{
		if (s[c] == '-')
			b = -1;
		else if (s[c] >= '0' && s[c] <= '9')
			v = (v * 10) + (s[c] - '0');
		else if (s[c] < '0' || s[c] > '9')
		{
			if (v == 0)
				b = 1;
			else if (b < 0)
			{
				v = (v * -1);
				return (v);
			}
		}
		c++;
	}
	if (b < 0)
		v = (v * -1);
	return (v);
}
