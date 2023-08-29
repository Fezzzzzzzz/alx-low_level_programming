#include "lists.h"
/**
 * free_listint -  function that frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head;
		head = head->next;
		free(a);
	}
}

