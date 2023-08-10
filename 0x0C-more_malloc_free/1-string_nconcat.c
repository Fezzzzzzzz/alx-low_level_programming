#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *array;

	(s1 == NULL) ? s1 = "" : s1;
	(s2 == NULL) ? s2 = "" : s2;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	(n >= len2) ? n = len2 : n;
	array = malloc(sizeof(char) * (len1 + n + 1));
	if (!array)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		array[len1] = s1[len1];
	for (len2 = 0; len2 < n ; len2++)
	{
		array[len1] = s2[len2];
		len1++;
	}

	array[len1] = '\0';
	return (array);
}

