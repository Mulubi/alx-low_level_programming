#include "list.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;

	n = first->next;

	h = first->next;

	free(first);

	*head = h;

	return (n);
}

