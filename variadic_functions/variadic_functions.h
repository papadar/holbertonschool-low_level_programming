#ifndef _MYDEF_H
#define _MYDEF_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printChar(va_list charList);
void printInt(va_list intList);
void printFlot(va_list flotList);
void printStr(va_list strList);

#endif
