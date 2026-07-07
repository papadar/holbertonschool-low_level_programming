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
	char ch = 'z';
	char end = 'a';

	for (ch = 'z'; ch >= end; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
