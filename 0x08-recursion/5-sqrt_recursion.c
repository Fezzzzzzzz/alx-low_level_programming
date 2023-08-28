#include <stdio.h>
/**
 * helper - function that help to fine the root
 * @n: integer
 * @j: integer
 * Return: the root
 */

int helper(int n, int j)
{
	if (j * j == n)
		return (j);
	if (j * j > n)
		return (-1);
	return (helper(n, j + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
