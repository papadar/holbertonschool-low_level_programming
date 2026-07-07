#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to display the size of variables on this platform
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variables declared */
	char charVar;
	int intVar;
	long longVar;
	long long longLongVar;
	float floatVar;

	/* Print the variable sizes in bytes*/
	printf("Size of a char: %d byte(s)\n", sizeof(charVar));
	printf("Size of an int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongVar));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));
	return (0);
}
