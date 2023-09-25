#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 *               and returns the head node’s data (n)
 * @head: head of the list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int a;

	if (*head == NULL)
		return (0);

	node = *head;
	a = node->n;
	*head = node->next;

	free(node);

	return (a);
}
