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
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar((i % 10) + '0');
		}
		else
		{
			putchar((i % 10) + 'a');
		}
	}
	putchar('\n');

	return (0);
}
