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
	int a;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(*x0 * ((max - min) + 1));

			if (x == NULL)
			return (NULL);

			for (a = 0; min <= max; a++, min++)
			x[a] = min;

			return (x);
}
