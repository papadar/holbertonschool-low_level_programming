#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdarg.h>

/**
 * main - the calculator main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, anything else is an error
 */

int main(int argc, char *argv[])
{
	int a, b;

	/*get the input*/
	/*analyse the input*/
	/*handle the input*/

	printf("argc = %i\n", argc);

	if (argc == 4)
	{
        	a = atoi(argv[1]);
        	b = atoi(argv[3]);
		printf("here\n");
	}
	else
	{
		printf("argc = %d\n", argc);
		printf("Error\n");


		return (98);
	}
}
