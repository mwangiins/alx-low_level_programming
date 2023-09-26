#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num_nodes = 0;
    listp_t *hptr = NULL, *new, *add;

    while (head != NULL)
    {
        new = malloc(sizeof(listp_t));
        if (new == NULL)
            exit(98);

        new->p = (void *)head;
        new->next = hptr;
        hptr = new;

        add = hptr;

        while (add->next != NULL)
        {
            add = add->next;
            if (head == add->p)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                return (num_nodes);
            }
        }

        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        num_nodes++;
    }

    return (num_nodes);
}

