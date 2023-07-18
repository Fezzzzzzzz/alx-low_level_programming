#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0.
 **/

int main(void)
	{
	char a [] = {"_putchar\n"};
	int i;

		for (i = 0; i < sizeof(a); i++)
		{
			putchar(a[i]);
		}
	return (0);
	}
