#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string being searched
 * @c: character being searched
 * Return: pointer to first occurrence if found in c
 *         NULL if not found in c
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
