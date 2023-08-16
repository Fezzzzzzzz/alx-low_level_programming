#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: is the size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && action)
	while (i < size)
	action(array[i++]);
}

