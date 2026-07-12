#include <stdio.h>

/**
 * main - print a sequence 0 - 100 replacing each
 * factor of 3 with a Fizz & each factor of 5 with a Buzz
 *
 * Return: always returns 0
 */
int main(void)
{
	int count;

	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0)
		{
			if (count % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count < 100)
			putchar(' ');
		count++;
	}
	putchar('\n');
	return (0);
}
