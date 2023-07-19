#include <stdio.h>
#include "main.h"
/**
 * jack_bauer-prints every minute of the day of Jack Bauer
 *
 * Description:starting from 00:00 to 23:59.
 *
 * Return: does not rerutn r
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		(i == 2) ? j = 0 : 1;
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					
					
					_putchar(i + '0');
					_putchar((j % 10) + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
