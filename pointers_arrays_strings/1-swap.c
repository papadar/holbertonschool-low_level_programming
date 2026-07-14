#include "main.h"

/**
 * swap_int - swap the value of two ints
 *
 * @a: first received value
 * @b: second received value
 *
 * Return: void no return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
