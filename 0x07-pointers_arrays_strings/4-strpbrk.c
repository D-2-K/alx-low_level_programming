#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string being searched
 * @accept: string s being searched in
 * Return: A pointer to byte in s that matches one in
 *        in accept or NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
