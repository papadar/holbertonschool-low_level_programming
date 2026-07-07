#include <stdlib.h>
#include <time.h>
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
	int n;
	int n0;
	char *string0 = "-";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n0 = n % 10;
	if (n0 > 5)
	{
		string0 = "greater than 5";
	}
	else if (n0 == 0)
	{
		string0 = "0";
	}
	else
	{
		string0 = "less than 6 and not 0";
	}

	printf("Last digit of %d is %d and is %s\n", n, n0, string0);
	return (0);
}
