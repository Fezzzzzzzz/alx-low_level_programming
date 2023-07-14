#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int A;
A = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", A);
return (1);
}
