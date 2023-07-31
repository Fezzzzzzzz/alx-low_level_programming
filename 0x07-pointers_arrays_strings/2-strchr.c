#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: character to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		j++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
