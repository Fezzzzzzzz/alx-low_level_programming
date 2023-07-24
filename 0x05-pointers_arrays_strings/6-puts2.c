#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: pointer of string
 *
 * REturn: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
		i++;

	while (j < i)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
