#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node begining of list_t list
 * @head: pointer to a pointer
 * @str: string
 *
 * Return: the address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->len = length;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
