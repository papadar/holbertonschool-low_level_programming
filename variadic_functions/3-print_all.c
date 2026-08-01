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
        int i;
        char *Str;
	float Flo;
	
        i = 0;
        va_start(List, format);
        while (format[i])
        {
                switch formate[i]
			case 'c':
				print_char();
				break;
			case 'i':
				print_int();
				break;
			case 'f':
				print_float();
				break;
			case 's':
				print_str();
				break;	
		i++;
        }
        printf("\n");
        va_end(List);
}
