#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 *
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *t;
	size_t n;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	x->len = n;
	x->t = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = x;
	}
	else
	{
		while (t->t != NULL)
			t = t->t;
		t->t = x;
	}

	return (*head);
}

