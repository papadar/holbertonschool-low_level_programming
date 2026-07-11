#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints every integer value between received & 98
 *
 * @n: received integer
 *
 * Return: void
 **/
void  print_to_98(int n)
{
	int N;

	N = 98;
	if (n < N)
	{
		while (n < N)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > N)
	{
		while (n > N)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", N);
}
