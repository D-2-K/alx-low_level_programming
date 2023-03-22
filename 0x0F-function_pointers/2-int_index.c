#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first element
 *             for which the cmp function does not return 0
 * @array: array being searched
 * @size: number of elements in the array
 * @cmp: pointer to function to compare values
 * Return: always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
