#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		print_alphabet();
		i++;
	}
}
