#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0.
 **/
#include <unistd.h>
int main(void)
	{/*
	char a [] = {"_putchar\n"};
	int i;

		for (i = 0; i < (sizeof(a)); i++)
		{
			putchar(a[i]);
		}*/
	write(0,"_putchar\n", sizeof("_putchar\n"));

	return (0);
	}
