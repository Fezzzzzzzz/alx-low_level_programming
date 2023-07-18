#include "main.h"
/**
* print_alphabet - print alphabet
*
* Description:function that prints the alphabet, in lowercase
*/
void print_alphabet(void)
{

	int i, j;

while (j <= 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	j++;
	}
}
