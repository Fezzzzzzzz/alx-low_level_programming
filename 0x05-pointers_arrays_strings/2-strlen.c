#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int sum;

	for (sum = 0; *s != '\0'; s++)
	{
		sum++;
	}

	return (sum);
}
