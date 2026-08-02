#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum result of n int args
 * @argc: the arg count
 * @argv: pointer to an array of args
 * Return: 0 for success, 1 for an error
 */

int main(int argc, char *argv[])
{
	int i;
	int val, sum;

	i = 1;
	sum = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			val = atoi(argv[i]);
			sum += val;
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
