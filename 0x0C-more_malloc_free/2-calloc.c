#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
