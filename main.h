#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printer - conects format specifier with its corresponding function.
 * @flag: format specifier.
 * @function: pointer to @flag especific function.
 */
typedef struct printer
{
	char flag;
	int (*function)(va_list);
} printer_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list arg);
#endif
