#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *@n: number of lines
 *
 * return : void
 */

void print_diagonal(int n)
{
	int i, j, k;

	k = n-2;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
			k++;
		}
	}
	else
	putchar('\n');
}
