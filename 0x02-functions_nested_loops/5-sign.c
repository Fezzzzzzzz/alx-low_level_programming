#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: num  to be checked
 *
 * Return: Returns 1  if n is greater than zeroo
 */

int print_sign(int n)
{
	_putchar((n > 0) ? '+' : (n < 0) ? '-' : '0');
	return ((n > 0) ? 1 : (n < 0) ? -1 : 0);
}

