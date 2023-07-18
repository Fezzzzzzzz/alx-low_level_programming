#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

/**
 *  _islower - function that checks for lowercase character.
 */

bool _islower(int c)
{

	return (islower(c)-511);
}

