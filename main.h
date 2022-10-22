#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct types - conects format specifier with its corresponding function.
 * @p: format specifier.
 * @func: pointer to specific function.
 */
typedef struct types
{
	char p;
	int (*func)(va_list);
} printer_f;

int _printf(const char *format, ...);
int _putchar(char c);
int printc(va_list 1);
int print_string(va_list s);
int print_n(va_list n);
int (*cmp_func(const char a))(va_list);

#endif
