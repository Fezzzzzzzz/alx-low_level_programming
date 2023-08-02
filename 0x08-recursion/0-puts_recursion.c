#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s++);
	if (*s != '\0')
	{
		_puts_recursion(s);
		_putchar('\n');
	}

}
