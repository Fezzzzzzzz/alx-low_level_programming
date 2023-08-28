#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_int - prints a character
 * @args: va_list containing the character to print
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print
 * @args: va_list containing the character to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_char - print
 * @args: va_list containing the character to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - print
 * @args: va_list containing the character to print
 */
void print_string(va_list args)
{
	char *a = va_arg(args, char *);

	printf("%s", (a != NULL) ? a : "(nil)");
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	helper help[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	int i = 0, j = 0;
	char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != help[j].a[0])
			++j;
		if (j < 4)
		{
			printf("%s", sep);
			help[j].b(args);
			sep = ", ";
		}
		++i;
	}
	printf("\n");
	va_end(args);
}
