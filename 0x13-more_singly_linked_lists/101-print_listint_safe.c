#include "lists.h"
/**
 * struct listp_p - singly linked list of pointers
 * @p: pointer
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 */
typedef struct listp_p
{
	void *p;
	struct listp_p *next;
} listp_t;

/**
 * free_listp_safe - frees a linked list
 * @head: head of a list
 *
 * Return: void
 */
void free_listp_safe(listp_t **head)
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
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new_node = 0;
	listp_t *pos = NULL;
	listp_t *ind = NULL;
	listp_t *sum = NULL;

	while (head != NULL)
	{
		ind = malloc(sizeof(listp_t));

		if (ind == NULL)
			exit(98);

		ind->p = (void *)head;
		ind->next = pos;
		pos = ind;

		sum = pos;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp_safe(&pos);
				return (new_node);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		new_node++;
	}

	free_listp_safe(&pos);
	return (new_node);
}

