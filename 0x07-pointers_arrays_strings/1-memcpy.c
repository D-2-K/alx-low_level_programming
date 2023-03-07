#include "main.h"

/**
 * _memcpy - copies memory area
 * @ dest: destination
 * @src: origin
 * @n: bytes copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
