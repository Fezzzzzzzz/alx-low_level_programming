#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a linked list.
 * @head:  pointer to the head of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head, *fast_ptr = head;

	while (fast_ptr != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}
	return (NULL);
}
