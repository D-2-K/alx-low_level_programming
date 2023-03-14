#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *  it with a specific char
 *  @c: character to initialize
 *  @size: size in bytes
 *
 *  Return: Pointer to array or Null if if fails or equals to 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
