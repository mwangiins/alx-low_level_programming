#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the head
 * @idx: index to the list storing new node
 * @n: value
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos;
	listint_t *node, *func = *head;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = func;
		*head = node;
		return (node);
	}
	for (pos = 0; pos < (idx - 1); pos++)
	{
		if (func == NULL || func->next == NULL)
			return (NULL);

		func = func->next;
	}
	node->next = func->next;
	func->next = node;

	return (node);
}
