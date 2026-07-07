#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: text here
 *
 * Return: Always returns 0
 */
int main(void)
{
	char ch = 'a';
	char end = 'z';

	for (ch = 'a'; ch <= end; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
