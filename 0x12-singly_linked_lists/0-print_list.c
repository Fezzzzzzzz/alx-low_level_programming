#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: pointer to the head list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	int j = 0;

	while (h)
	{
	j = 0;
	while (h->str != NULL && h->str[j])
		j++;
	if (h->str)
	{
	printf("[%d] %s\n", j, h->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	h = h->next;
	i++;
	}
	return (i);
}
