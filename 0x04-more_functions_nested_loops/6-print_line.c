#include "main.h"
/**
 * print_line- function that prints line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	putchar('\n');
}
