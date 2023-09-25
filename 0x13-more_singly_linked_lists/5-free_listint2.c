#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the head of the list
 * Return:
 */

void free_listint2(listint_t **head)
{
	listint_t *func;

	if (head == NULL)
		return;
	while (*head)
	{
		func = (*head)->next;
		free(*head);
		*head = func;
	}

	head = NULL;
}
