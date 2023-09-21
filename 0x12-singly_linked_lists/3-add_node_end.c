#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: pointer
 * @str: a string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fun, *last;
	int len;
	char *try;

	fun = malloc(sizeof(list_t));
	if (fun == NULL)
		return (NULL);
	try = strdup(str);
	if (str == NULL)
	{
		free(fun);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	fun->str = try;
	fun->len = len;
	fun->next = NULL;

	if (*head == NULL)
		*head = fun;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = fun;
	}
	return (*head);
}
