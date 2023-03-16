#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size allocated in bytes
 *
 * Return: Pointer to allocated memory for success and
 *         status value of 98 for fail
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
