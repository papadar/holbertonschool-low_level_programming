#include "main.h"

/**
 * jack_bauer - prints every minute of a day in 00:00 format
 *
 * @t - Total minutes within the day
 * @h - Total hours
 * @m - Minutes within the current hour
 *
 * Return: void returns nothing
 */
void jack_bauer(void)
{
	int t;
	int h;
	int m;

	t = 0;
	h = 0;
	m = 0;

	while (t < 1440)
	{
		int ht;
		int h0;
		int mt;
		int m0;

		h = (t / 60);
		m = (t % 60);
		ht = (h / 10);
		h0 = (h % 10);
		mt = (m / 10);
		m0 = (m % 10);

		_putchar('0' + ht);
		_putchar('0' + h0);
		_putchar(':');
		_putchar('0' + mt);
		_putchar('0' + m0);
		_putchar('\n');
		t++;
	}
}
