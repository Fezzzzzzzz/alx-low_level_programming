#include <stdio.h>
/**
 * helper - function that help to fine the root
 * @n: the number
 * @j: the number
 * @i: num to increment
 * Return: the root
 */

int helper(int n, int j)
{
	int i = 0;
	if (n < 0)
		return (-1);

up:;
	n = (n + (j / n)) / 2;
	if (n * n == j)
	{
		return (n);
	}
	else
	{
		if (i > 100)
			return (-1);
	i++;
	goto up;
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (helper(n, n));
}
