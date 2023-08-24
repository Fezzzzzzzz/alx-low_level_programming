#include "lists.h"

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