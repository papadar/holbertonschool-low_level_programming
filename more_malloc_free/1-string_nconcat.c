#include <stdlib.h>
#include "main.h"

/**
 * str_count - count a string length and return that as int
 *
 * @s: pointer to the location of the string
 *
 * Return: int length of the string
 */
int str_count(char *s)
{
	int count;

	count = 0;
	if (s != NULL)
	{
		while (s[count] != '\0')
			count++;
		return (count);
	}
	else
		return (count);
}

/**
 * string_nconcat - concatenate two strings using malloc
 *
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: number of byes from 2nd string to copy
 *
 * Return: pointer to first character of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int c0, c1, c2;

	c1 = str_count(s1);
	c2 = str_count(s2);
	if (n > c2)
	{
		n = c2;
	}
	newString = malloc((c1 + n + 1) * sizeof(*newString));
	if (newString)
	{
		c0 = 0;
		while (c0 < c1)
		{
			newString[c0] = s1[c0];
			c0++;
		}
		while (c0 < (c1 + n))
		{
			newString[c0] = s2[c0 - c1];
			c0++;
		}
		newString[c0] = '\0';
		return (newString);
	}
	else
	{
		return (NULL);
	}
}
