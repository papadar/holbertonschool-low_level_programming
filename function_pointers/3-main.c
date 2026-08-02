#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - the calculator main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, anything else is an error
 */

int main(int argc, char *argv[])
{
	int a, b, count;

	a = b = count = 0;

	/*get the input*/
	/*analyse the input*/
	/*handle the input*/

	if (argc == 4)
	{
		switch (argv[2])
			case '+':
				printf("add");
				break;
			case '-':
				printf("sub");
				break;
			case '*':
				printf("mult");
				break;
			case '/':
				printf("div");
				break;
			case '%':
				printf("mod");
				break;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
