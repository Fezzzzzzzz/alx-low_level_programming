#include "lists.h"
/**
 * free_listint2 -  function that frees a list_t list and sets the head to NULL
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;
	while (*head)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
	}
	*head = NULL;
}

