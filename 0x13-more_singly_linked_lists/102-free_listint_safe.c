#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list.
 * @h: head of a list.
 *
 * Return: the size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t new_nodes = 0;
	listp_t *pos, *prt, *sum;
	listint_t *current;

	pos = NULL;
	while (*h != NULL)
	{
		prt = malloc(sizeof(listp_t));

		if (prt == NULL)
			exit(98);

		prt->p = (void *)*h;
		prt->next = pos;
		pos = prt;

		sum = pos;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp(&pos);
				return (new_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		new_nodes++;
	}

	*h = NULL;
	free_listp(&pos);
	return (new_nodes);
}
