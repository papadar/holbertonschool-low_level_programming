#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints the all
 * @format: the format to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char sep[3] = {'\0', '\0', '\0'};
	char match[5] = {'c', 'i', 'f', 's', '\0'};
	void (*functions[5])() = {printChar, printInt, printFlot, printStr, NULL};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (match[j])
		{
			if (format[i] == match[j])
			{
				printf("%s", sep);
				functions[j](args);
				sep[0] = ',';
				sep[1] = ' ';
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
/**
 * printChar - prints the chars
 * @charList: the list of chars
 */
void printChar(va_list charList)
{
	printf("%c", (char)va_arg(charList, int));
}
/**
 * printInt - prints the Ints
 * @intList: the list of Ints
 */
void printInt(va_list intList)
{
	printf("%d", va_arg(intList, int));
}
/**
 * printFlot - prints the floats
 * @flotList: the list of floats
 */
void printFlot(va_list flotList)
{
	printf("%f", va_arg(flotList, double));
}
/**
 * printStr - prints the Strings
 * @strList: the list of Strings
 */
void printStr(va_list strList)
{
	char *str = va_arg(strList, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
