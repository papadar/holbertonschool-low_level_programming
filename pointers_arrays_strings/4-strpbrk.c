#include "main.h"

/**
 * _strpbrk - search a string for a set of bytes
 *
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: pointer to first matching character
 */
char *_strpbrk(char *s, char *accept)
{
	int check, cycle;

	check = 0;
	while (s[check] != '\0')
	{
		cycle = 0;
		while (accept[cycle] != '\0')
		{
			if (s[check] == accept[cycle])
			{
				return (&s[check]);
			}
			cycle++;
		}
		check++;
	}
	return ('\0');
}
