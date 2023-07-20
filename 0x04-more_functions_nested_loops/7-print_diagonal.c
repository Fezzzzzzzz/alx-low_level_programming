#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j, k;

	k = n - 2;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
	else
	_putchar('\n');
}
