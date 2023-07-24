#include "main.h"
/**
 * rev_string - function that reverse string
 * @s: pointer of a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;

	int j = 0;

	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	while (i > j)
	{
		a = s[--i];
		s[i] = s[j];
		s[j++] = a;
	}

}
