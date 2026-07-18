#include "main.h"

/**
 * break_check - check the previous character for a word breaker
 * 
 * @p: received a character to check
 * 
 * Return: 1 is a break, 0 is not a break
 */

int break_check(char p)
{
	switch (p)
	{
		case ' ':
			return (1);
		case '\t':
			return (1);
		case '\n':
			return (1);
		case ',':
			return (1);
		case ';':
			return (1);
		case '.':
			return (1);
		case '!':
			return (1);
		case '?':
			return (1);
		case '"':
			return (1);
		case '(':
			return (1);
		case ')':
			return (1);
		case '{':
			return (1);
		case '}':
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalises each word in a string
 *
 * @s: received pointer to string
 *
 * Return: the first character of the string
 */
char cap_string(char *s)
{
	char p, l;
	int c, r;

	c = r = 0;
	while (s[c] != '\0')
	{
		l = s[c];
		if (c > 0)
			r = break_check(s[c-1]);
		else
			r = 1;
		if (l >= 'a' && l <= 'z' && r == 1)
			s[c] = l - 32;
		c++;
	}
		return (s);
}
