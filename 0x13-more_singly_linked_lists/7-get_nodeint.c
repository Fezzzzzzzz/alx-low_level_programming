#include "lists.h"
/**
 * get_nodeint_at_index -function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: s the index of the node, starting at 0
 * Return: the node and if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
