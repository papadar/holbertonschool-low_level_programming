#include "main.h"

/**
 * more_numbers - print numbers 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int t;
	int n;

	t = 0;
	while (t < 10)
	{
		n = 0;
		while (n < 15)
		{
			int d;	

			d = (n % 10);
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar('0' + d);
			n++;
		}
		_putchar('\n');
		t++;
	}
}
