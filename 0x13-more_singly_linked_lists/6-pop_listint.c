#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to the head of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int i;

	if (head == NULL)
		return (0);
	a = *head;
	i = a->n;
	*head = (*head)->next;
	free(a);
	return (i);
}
