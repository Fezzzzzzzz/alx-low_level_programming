#include "main.h"

/**
 *print_triangle- function that prints a triangle, followed by a new line.
 *@size: size of triangle
 *
 *return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
	(size <= 0) ? _putchar('\n') : 0;
}
