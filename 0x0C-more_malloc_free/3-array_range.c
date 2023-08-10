#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
