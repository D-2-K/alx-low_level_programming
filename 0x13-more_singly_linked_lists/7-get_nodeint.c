#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: pointer to a list
 * @index: index of the node
 *
 * Return: NULL if node does not exist
 *         Otherwise return the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
