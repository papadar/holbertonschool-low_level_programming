#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * pr_menu - print the various menus
 *
 * @m: input from user - defaults to 0
 */
void pr_menu(int m)
{
	if (m == 0)
	{
		/* print the main menu*/
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
	}
}

/**
 * calc_time - receive input and display result depending on choice
 *
 * @input: the user chose a valid option
 */
int calc_time(int input)
{
	int a, b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);

	switch (input)
	{
		case 1:
			printf("Result: %d\n", a + b);
			return (1);
		case 2:
			printf("Result: %d\n", a - b);
			return (1);
		case 3:
			printf("Result: %d\n", a * b);
			return (1);
		case 4:
			printf("Result: %d\n", a / b);
			return (1);
	}

	return (0);
}

/**
 * main - the simple calculator program
 *
 * Return: always nothing
 */
int main(void)
{
	int input, quit;

	input = -999;
	quit = 0;

	printf("Simple Calculator\n");
	pr_menu(0);
	while (quit != 1)
	{
		scanf("%d", &input);
		if (input < 0 || input > 4)
			printf("Invalid choice\n");
		else
		{
			if (input == 0)
			{
				quit = 1;
				break;
			}
			printf("Choice: %d\n", input);
			quit = calc_time(input);
		}
	}
	printf("Bye!\n");
	return (0);
}
