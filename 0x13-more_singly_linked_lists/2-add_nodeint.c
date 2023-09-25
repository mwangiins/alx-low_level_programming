#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of the linked list
 * @n: integer to insert as new node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);

	first->n = n;
	first->next = *head;
	*head = first;

	return (first);
}
