#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: node index
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos;

	for (pos = 0; pos < index; pos++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
