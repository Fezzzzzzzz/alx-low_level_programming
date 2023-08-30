#include "lists.h"
#include <stdio.h>

/**
 * loop - function that get the length of a loop
 * @head:  pointer to the head of the list
 * Return:number of nodes in the loop
 */
size_t loop(const listint_t *head)
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
 * print_listint_safe - function that prints a listint_t linked list.
 * @head:  pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length, i;

	length = loop(head);

	if (!length)
	{
		for (; head != NULL; length++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < length; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (length);
}
