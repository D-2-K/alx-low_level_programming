#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a list and
 *               returns the head node's data (n)
 * @head: pointer
 *
 * Return: Head node's data
 *         Zero (0) if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *btwn;
