#include "lists.h"
/**
 * before_main - function that execute  before the main function is executed.
 * Return: 0.
 */
__attribute__((constructor))
int before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
return (0);
}
