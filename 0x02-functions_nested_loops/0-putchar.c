#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0.
 **/
#include <unistd.h>
int main(void)
	{
	write(1, "_putchar\n", sizeof("_putchar\n") - 1);

	return (0);
	}
