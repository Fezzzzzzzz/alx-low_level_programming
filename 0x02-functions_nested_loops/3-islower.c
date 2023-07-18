#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * _islower- checks for lowercase character
 *
 * Description: function that checks for lowercase character.
 * @c:character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
bool _islower(int c)
{

	return (islower(c));
}

