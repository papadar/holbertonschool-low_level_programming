#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - prints the sum result of n int args
 * @argc: the arg count
 * @argv: pointer to an array of args
 * Return: 0 for success, 1 for an error
 */

int main(int argc, char *argv[])
{
	char *ptr;
	int i, sum;
	long val;

	i = 1;
	sum = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			val = strtol(argv[i], &ptr, 10);
			if (ptr == argv[i] || *ptr != '\0' || val > INT_MAX || val < INT_MIN)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += (int)val;
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
