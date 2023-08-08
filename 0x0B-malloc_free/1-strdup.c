#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *array;
	int i, len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	array = malloc(sizeof(char) * (len + 1));
	if (array)
	{
		for (i = 0; i < len; i++)
		{
			array[i] = str[i];
		}
		array[i] = '\0';
	}
	else
		return (NULL);
	return (array);
}
