#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	while (*b && b)
	{
		if (*b == '0' || *b == '1')
		{
			sum <<= 1;
			sum = sum + *b - '0';
			b++;
		}
		else
			return (0);
	}
	return (sum);
}
