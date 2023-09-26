#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: A pointer to the head
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_node, *last_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first_node = head->next;
	last_node = (head->next)->next;

	while (last_node)
	{
		if (first_node == last_node)
		{
			first_node = head;

			while (first_node != last_node)
			{
				first_node = first_node->next;
				last_node = last_node->next;
			}

			return (first_node);
		}
		first_node = first_node->next;
		last_node = (last_node->next)->next;
	}

	return (NULL);
}

