#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @c: fills memory area directed by pointer
 * @n: bytes to fill
 * Return: a pointer to the memory area @s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;
	
	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
