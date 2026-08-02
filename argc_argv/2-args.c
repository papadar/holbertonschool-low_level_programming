#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all of args received
 * @argc: the arg count
 * @argv: pointer to an array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
