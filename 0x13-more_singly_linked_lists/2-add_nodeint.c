#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Function that addsa new node at the
 *               beginning of a listint_t list
 * @head: Pointer to the address of the head of the of list
 * @n: New node
 *
 * Return: Address of the new element for success and NULL for fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
