#include <stdio.h>
/**
 * helper - function that help to find the prime number
 * @n: integer
 * @j: integer
 * Return:1 if the input integer is a prime number, otherwise return 0
 */

int helper(int n, int j)
{
	if (n == j)
		return (1);
	if (n % j == 0)
		return (0);
	return (helper(n, j + 1));
}
/**
 * is_prime_number - function that checks prime numbers
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, 2));
}
