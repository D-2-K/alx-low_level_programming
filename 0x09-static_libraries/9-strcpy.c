#include "main.h"

/**
 * char *_strcpy - copies a pointed string
 * @dest: destination
 * @src: target
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int x = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; x < a; x++)
	{
		dest[x] = src[x];
	}
	dest[a] = '\0';
	return (dest);
}
