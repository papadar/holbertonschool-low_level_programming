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
void calc_add(void)
{
	int a, b;
	
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	printf("Result: %d\n", a + b);
}
void calc_subtract(void)
{
	int a, b;
	
	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	printf("Result: %d\n", a - b);
}
void calc_multiply(void)
{
	int a, b;

	printf("A: ");
	scanf("%d",&a);
	printf("B: ");
	scanf("%d",&b);
	printf("Result: %d\n", a * b);
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
			switch (input)
			{
				case 1: 
					calc_add();
					quit = 1;
					break;
				case 2: 
					calc_subtract();
					quit = 1;
					break;
				case 3: 
					calc_multiply();
					quit = 1;
					break;
				case 4: 
					quit = 1;
					break;
			}
		}
	}
	printf("Bye!\n");
	return (0);
}
