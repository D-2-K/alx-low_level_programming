#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: fills memory area directed by pointer
 * @n: bytes to fill
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = b;
	
	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
