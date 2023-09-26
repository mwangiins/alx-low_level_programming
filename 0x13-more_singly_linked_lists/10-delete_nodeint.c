#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer to the head of a linked list
 * @index: index of deleted node
 * Return: 1 if it succeeded
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *del = *head;
	unsigned int pos;

	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	for (pos = 0; pos < (index - 1); pos++)
	{
		if (del->next == NULL)
			return (-1);
		del = del->next;
	}

	node = del->next;
	del->next = node->next;
	free(node);
	return (1);
}
