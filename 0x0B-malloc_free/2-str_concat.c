#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int len1, len2;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!array)
		return (NULL);
	for (len1 = 0; s1[len1]; len1++)
	{
		array[len1] = s1[len1];
	}
	for (len2 = 0; s2[len2]; len2++)
	{
		array[len1] = s2[len2];
		len1++;
	}
	array[len1] = '\0';
	return (array);
}
