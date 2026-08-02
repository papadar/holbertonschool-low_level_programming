#include "3-calc.h"

/**
 * main - the calculator main
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, anything else is an error
 */

int main(int argc, char *argv[])
{
	int (*funky)(int, int);
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		funky = get_op_func(argv[2]);
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if (funky == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		if (b == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
		{
			printf("Error\n");
			exit(100);
		}
		res = funky(a, b);
		printf("%d\n", res);
		return (0);
	}
}
