#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: pointer of string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
		i++;
	j = (i % 2 == 0) ? i / 2 : (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
