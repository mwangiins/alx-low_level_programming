#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to list
 * @str: string
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ing;
	unsigned int len = 0;

	while (str[len])
		len++;

	ing = malloc(sizeof(list_t));
	if (!ing)
		return (NULL);
	ing->str = strdup(str);
	ing->len = len;
	ing->next = (*head);
	(*head) = ing;

	return (*head);


}
