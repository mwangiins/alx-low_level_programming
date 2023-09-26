#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to head
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
