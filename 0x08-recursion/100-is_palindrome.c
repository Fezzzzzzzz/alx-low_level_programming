#include "main.h"
#include <stdio.h>
/**
 * _strlen - to fine the length of string
 * @array: string to get its length
 * @i: integer initial value
 * Return: the length of string
 */
int _strlen(char *array, int i)
{
	if (array[i] == '\0')
		return (0);
	return (1 + _strlen(array, i + 1));
}
/**
 * helper - check the string if it is palindrome
 * @s: string to be checked
 * @i: the end of the string
 * @j: the start of string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int helper(char *s, int i, int j)
{
	if (i <= 1)
		return (1);
	if (s[j] != s[i])
		return (0);
	return (helper(s, i - 1, j + 1));
}
/**
 * is_palindrome - check the string if it is palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (helper(s, _strlen(s, 0) - 1, 0));
}
