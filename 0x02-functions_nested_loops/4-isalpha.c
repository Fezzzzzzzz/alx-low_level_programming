#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * _isalpha- checks for  alphabetic character.
 *
 * Description: function that checks for  alphabetic character.
 * @c:character to be checked
 *
 * Return: 1 if c is is a letter,, 0 otherwise
 */
bool _isalpha(int c)
{

	return (isalpha(c));
}

