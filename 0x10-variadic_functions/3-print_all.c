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
	{'i', print_int},
	{'c', print_char},
	{'f', print_float},
	{'s', print_string}
	};
	va_list args;
	int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == help[j].a)
			{
				help[j].b(args);
				if (format[i] + 2 != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	printf("\b \b\b \b");
	va_end(args);
	printf("\n");
}
