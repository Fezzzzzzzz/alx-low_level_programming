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
		if(n <= 0 ){
			break;
		}
		putchar('_');
	}
	putchar('\n');
}
