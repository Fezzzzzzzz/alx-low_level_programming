#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz
 * for multiples of both 3 and 5. Otherwise, prints the number.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\b \b");
	return (0);
}
