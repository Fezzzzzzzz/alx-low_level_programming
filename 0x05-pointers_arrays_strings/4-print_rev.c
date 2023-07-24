#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer of a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
