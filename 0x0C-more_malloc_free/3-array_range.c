#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum values included
 * @max: maximum values included
 *
 * Return: pointer to new array for success,
 *         NULL if min > max or malloc fails
 */

int *array_range(int min, int max)
{
	int *x;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

			if (x == NULL)
			return (NULL);

			for (a = 0; min <= max; a++)
			x[a] = min++;

			return (x);
}
