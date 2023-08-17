#include <stdio.h>
#include <stdarg.h>
typedef struct {
	char a;
	void (*b)(va_list);
} helper;
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
        printf("%f", va_arg(args, double));
}
void print_char(va_list args)
{
        printf("%c", va_arg(args, int));
}
void print_string(va_list args)
{
	char *a = va_arg(args, char *);
	if (a != NULL)
		printf("%s", a);
	else
		printf("(nil)");
}
void (*get(char a))(va_list)
{
	helper help[] = {
		{'i', print_int},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string}
	};	
	int i = 0;
	while (i < 4)
	{
	if (a == help[i].a)
		return help[i].b;
	i++;
	}
	return 0;
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		get(format[i]);
		i++;
	}
	va_end(args);
	printf("\n");
}
