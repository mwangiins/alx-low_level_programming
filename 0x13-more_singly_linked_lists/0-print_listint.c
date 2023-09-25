#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *pri = h;

	while (pri)
	{
		printf("%d\n", pri->n);
		pri = pri->next;
		node++;
	}
	return (node);
}
