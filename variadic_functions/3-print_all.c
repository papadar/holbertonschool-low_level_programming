#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints the all
 * @format: the thing to print
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
        va_list List;
        int u, v;
	OPP opts[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFlot},
		{"s", printStr},
		{NULL, NULL}
	};
	
        va_start(List, format);
        
	u = 0;
	while (format[u])
        {
        	v = 0;
		while (opts[v].operation)
		{
			if (format[u] == opts[v].operation[0])	
				opts[v].func(List);				
			v++;
		}
		u++;
	}
        printf("\n");
        va_end(List);
}

void printChar(va_list charList)
{
	printf("%c", va_arg(charList, char));
}
void printInt(va_list intList)
{
	printf("%i", va_arg(intList, int));
}
void printFlot(va_list flotList)
{
	printf("%f", va_arg(flotList, float));
}
void printStr(va_list strList)
{
	printf("%s", va_arg(strList, *char));
}
