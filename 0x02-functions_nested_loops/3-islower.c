#include <ctype.h>
#include <stdio.h>
/**
 *  _islower - function that checks for lowercase character.
 */

int _islower(int c)
	int c;
{

	return (islower(c)-511);
}

