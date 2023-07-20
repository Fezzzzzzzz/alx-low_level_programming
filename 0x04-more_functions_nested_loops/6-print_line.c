#include "main.h"
/**
 * print_line- function that prints line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		continue;
		putchar('_');
	}
	putchar('\n');
}
