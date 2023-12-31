#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ar =  malloc(size * sizeof(char));
	if (ar)
	{
	while (!ar[i])
	{
		ar[i] = c;
		i++;
	}
	}
	else
		return (NULL);
	return (ar);
}
