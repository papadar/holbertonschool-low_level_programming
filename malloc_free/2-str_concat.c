#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the 2nd string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char * s2)
{
	char *ar;
	unsigned int c0, c1, c2;

	c0 = c1 = c2 = 0;
	if (!s1 || s1[0] == '\0')
		return (NULL);
	while (s1[c1] != '\0')
		c1++;

	if (!s2 || s2[0] == '\0')
		return (NULL);
	while (s2[c2] != '\0')
		c2++;


	if (c1 > 0 && c2 > 0)
	
	{
		ar = (char *)malloc((len + 1) * sizeof(char));

		if (ar)
		{
			while (c < len)
			{
				ar[c] = str[c];
				c++;
			}
			if (len == 0)
				ar[0] = '\0';
			return (&ar[0]);
		}
		else
		{
			free(ar);
			return (NULL);
		}
	}
	else
		return (NULL);
}
