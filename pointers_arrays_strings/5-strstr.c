#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: pointer to string to search within
 * @needle: pointer to substring to search for
 *
 * Return: pointer to first matching loaction
 */
char *_strstr(char *haystack, char *needle)
{
	char c;
	int check, cycle;

	c = needle[0];
	check = 0;
	while (haystack[check] != '\0')
	{
		cycle = 0;
		if (haystack[check] == c)
		{
			cycle = 0;
			while (needle[cycle] != '\0')
			{
				if (haystack[check + cycle] == needle[cycle])
				{
					if (needle[cycle + 1] == '\0')
						return (&haystack[check]);
					cycle++;
				}
				else
					break;
			}
		}
		check++;
	}
	return ('\0');
}
