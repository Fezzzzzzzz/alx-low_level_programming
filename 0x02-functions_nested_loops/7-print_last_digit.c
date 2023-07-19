#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit-function that prints the last digit of a number.
 *
 * Description: function that prints the last digit of a number..
 * @n: the numer
 *
 * Return: the last number
 */

int print_last_digit(int n)
{
	int a;

	a = abs(n % 10);

	_putchar(a + '0');
	return (a);
}
