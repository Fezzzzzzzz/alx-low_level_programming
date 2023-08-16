#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc > 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((atoi(argv[2]) == '/' || atoi(argv[2]) == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
