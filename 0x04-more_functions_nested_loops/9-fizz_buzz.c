#include "main.h"

/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			_putchar(' ');
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			_putchar(' ');
			continue;
		}
		if (i >= 10)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(' ');
	}
	return (0);
}
