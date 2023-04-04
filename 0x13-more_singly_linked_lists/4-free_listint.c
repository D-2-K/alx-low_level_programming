#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Function that frees a list
 * @head: Pointer to a list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *btwn;

	while (head)
	{
		btwn = head->next;
		free(head);
		head = btwn;
	}
}
