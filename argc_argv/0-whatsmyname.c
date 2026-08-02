#include "main.h"
#include <stdio.h>

/**
 * main - prints the zeroth arg - whhich is the name of the program
 * @argc: the arg count
 * @argv: pointer to an array of args
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
