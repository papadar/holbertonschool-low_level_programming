#include "main.h"

/**
 * mod_recursive - check if number is divisible
 * @s: value to check with
 * @n: value to check
 * Return: 0 if divisible, 1 if not
 */

int mod_recursive(int s, int n)
{
	if (s > n / 2)
		return (1);
	if (n % s == 0)
		return (0);
	else
		return (mod_recursive(s + 1, n));
}

/**
 * is_prime_number - determine if a received value is a prime
 * @n: received value
 * Return: 0 is no 1 is yes
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (mod_recursive(2, n));
}
