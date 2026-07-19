#include "main.h"

/**
 * _strspn - find the length of a prefix sub string
 *
 * @s: pointer to a string
 * @accept: pointer to substring
 *
 * Return: length of prefix
 */
int _strspn(char *s, char *accept)
{
	int count, check, cycle, compare;

	count = check = cycle = compare = 0;
	while (s[check] != '\0')
	{
		cycle = 0;
		compare = count;
		while (accept[cycle] != '\0')
		{
			if (s[check] == accept[cycle])
			{
				count++;
			}
			cycle++;
		}
		if (count != compare)
			check++;
		else
			return (count);
	}
	return (count);
}
