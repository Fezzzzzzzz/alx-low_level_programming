#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0.
 **/
#include <unistd.h>
int main(void)
	{
	write(0, "_putchar\n", sizeof("_putchar\n"));

	return (0);
	}
