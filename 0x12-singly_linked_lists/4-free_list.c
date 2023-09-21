#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *func;

	while (head)
	{
		func = head->next;
		free(head->str);
		free(head);
		head = func;
	}
}
