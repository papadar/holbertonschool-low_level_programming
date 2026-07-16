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

	input = -999;

	printf("Simple Calculator\n");
	pr_menu(0);
	while (input != 0)
	{
		scanf("%d", &input);
		if (input < 0 || input > 4)
			printf("Invalid choice\n");
		else
		{
			printf("Choice: %d\n", input);
			switch (input)
			{
				case 0: 
					printf("exit: %d\n", input);
					break;
				case 1: 
					printf("one: %d\n", input);
					break;
				case 2: 
					printf("two: %d\n", input);
					break;
				case 3: 
					printf("three: %d\n", input);
					break;
				case 4: 
					printf("four: %d\n", input);
					break;
			}
		}
	}
	printf("Bye!\n");

	return (0);
}
