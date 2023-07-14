#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i <= 102)
	{
		putchar(i);
		if (i == 57)
		{
			i = i + 40;
			continue;
		}
		i++;
	}
	putchar(10);
	return (0);
}
