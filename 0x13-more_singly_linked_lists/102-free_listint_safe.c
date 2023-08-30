#include "lists.h"
/**
 * loop2- function that get length of a loop
 * @head:  pointer to the head of the list
 * Return: number of nodes in the loop
 */
size_t loop2(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t length = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_ptr = head->next;
	fast_ptr = head->next->next;
	while (fast_ptr != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
			}

			return (length);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	return (0);
}

/**
 * free_listint_safe -  function that frees a listint_t list.
 * @h: pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t length, i;

	length = loop2(*h);

	if (length == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		*h = NULL;
	}
	h = NULL;
	return (i);
}
