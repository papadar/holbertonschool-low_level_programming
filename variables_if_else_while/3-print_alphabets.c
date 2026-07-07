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
	char ch0 = 'a';
	char end0 = 'z';
	char ch1 = 'A';
	char end1 = 'Z';

	for (ch0 = 'a'; ch0 <= end0; ch0++)
		putchar(ch0);

	for (ch1 = 'A'; ch1 <= end1; ch1++)
		putchar(ch1);

	putchar('\n');

	return (0);
}
