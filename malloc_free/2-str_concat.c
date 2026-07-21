#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_count - count a string length and return that as int
 *
 * @s: pointer to the location of the string
 *
 * Return: int length of the string
 */
int str_count(char *s)
{
	unsigned int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 * str_concat - concatenate two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int c0, c1, c2;

	c0 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c1 = str_count(s1);
	c2 = str_count(s2);
	ar = (char *)malloc((c1 + c2 + 1) * sizeof(char));
	if (ar)
	{
		if (c1 > 0)
		{
			while (c0 < c1)
			{
				ar[c0] = s1[c0];
				c0++;
			}
		}
		if (c2 > 0)
		{
			while (c0 < (c1 + c2))
			{
				ar[c0] = s2[c0 - c1];
				c0++;
			}
		}
		ar[c0] = '\0';
		return (ar);
	}
	else
	{
		free(ar);
		return ('\0');
	}
}
