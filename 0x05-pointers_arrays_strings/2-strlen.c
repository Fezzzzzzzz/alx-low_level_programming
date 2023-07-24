#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *@s: the string
 *
 * return : sum
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
