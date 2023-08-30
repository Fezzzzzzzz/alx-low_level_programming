#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head:pointer to the head of the list
 * @idx: s the index of the list where the new node should be added
 * @n:integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *a;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	a = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (a == NULL)
		{
			free(new);
			return (NULL);
		}
		a = a->next;
	}

	new->next = a->next;
	a->next = new;

	return (new);
}
