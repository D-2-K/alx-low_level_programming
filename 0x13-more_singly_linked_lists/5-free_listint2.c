#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Function that frees a list
 * @head: Pointer
 *
 * Description: function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *btwn;

	if (head == NULL)
		return;

	while (*head)
	{
		btwn = (*head)->next;
		free(*head);
		*head = btwn;
	}
	head = NULL;
}
