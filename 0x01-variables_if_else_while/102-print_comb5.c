#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, h, start;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				start = (h == i) ? j + 1 : 1;
				for (h = start; h < 10; h++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(h + '0');
					if (i != 9 || j != 8 || k != 9 || h != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
