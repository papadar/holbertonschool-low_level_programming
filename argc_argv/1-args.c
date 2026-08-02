#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of args received
 * @argc: the arg count
 * @argv: pointer to an array of args
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
