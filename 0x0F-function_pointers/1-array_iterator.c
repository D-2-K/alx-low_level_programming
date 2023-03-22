#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter on each array element
 * @array: array in question
 * @size: array sizes
 * @action: pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
