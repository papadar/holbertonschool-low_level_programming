#include "main.h"

/**
 * times_table - prints a 0-9 times table in a grid
 *
 * @i - first integer
 * @f - factor integer
 *
 * Return: void returns nothing
 */
void times_table(void)
{
	int i;
	int f;

	i = 0;
	while (i < 10)
	{
		_putchar('0');
		f = 1;
		while (f < 10)
		{
			int v;
			int o;
			int t;

			v = (i * f);
			t = (v / 10);
			o = (v % 10);

			_putchar(',');
			_putchar(' ');

			if (t > 0)
				_putchar('0' + t);
			else
				_putchar(' ');
			_putchar('0' + o);
			f++;
		}
		_putchar('\n');
		i++;
	}
}
