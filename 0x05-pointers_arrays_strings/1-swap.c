#include "main.h"
/**
 *swap_int- function that swaps the values of two integers.
 *@a: first int
 *@b: second int
 *
 * return : void
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
