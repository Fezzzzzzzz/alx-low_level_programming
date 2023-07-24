#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer of array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n - 1) ? 1 : printf(", ");
	}
	printf("\n");
}

