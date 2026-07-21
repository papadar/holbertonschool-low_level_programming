#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 *
 * @str: the given pointer to a string
 *
 * Return: pointer to the first char of the duped string
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int len, c;

	len = c = 0;
	if (!str)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	if (len > 0 || str[0] == '\0')
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
