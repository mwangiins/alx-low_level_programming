#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head of the linked list
 * @n: the new node integer
 *
 * Return: address of the new element
 *         NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	 listint_t *final_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	final_node = *head;

	while (final_node->next)

		final_node = final_node->next;
	final_node->next = new_node;

	return (new_node);
}
