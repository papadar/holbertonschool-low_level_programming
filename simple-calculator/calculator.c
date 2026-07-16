#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * pr_menu - print the various menus
 */

void pr_menu(int m)
{
	if (m == 0)
	{
        	/* print the main menu*/
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
	}
}

/**
 * main - the simple calculator program
 *
 * Return: always nothing
 */
int main(void)
{
	int input;

	pr_menu(0);

	scanf("%d", &input);

	printf("Choice: %d\n", input);
	printf("Bye!\n");

	return (0);
}
