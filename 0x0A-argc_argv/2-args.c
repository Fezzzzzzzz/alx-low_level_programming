#include <stdio.h>
/**
 * main - prints the arguments of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * @i: an integer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
