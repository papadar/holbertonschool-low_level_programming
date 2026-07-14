#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: received pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char *begin = s;

	/* the bounds of the string */
	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (begin < end)
	{
		char temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
