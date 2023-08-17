#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
/**
 * struct helper  - struct for printing different types
 * @a: format specifier
 * @b: function to print
 */
typedef struct helper
{
	int a;
	void (*b)(va_list);
} helper;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
