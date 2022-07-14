#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the start of the list
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *currlist, *nextlist;

	currlist = head;
	while (currlist != NULL)
	{
		nextlist = currlist->nextlist;
		free(currlist->str);
		free(currlist);
		currlist = nextlist;
	}
}
