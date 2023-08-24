#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	new->next = NULL;
	return (new);
}
