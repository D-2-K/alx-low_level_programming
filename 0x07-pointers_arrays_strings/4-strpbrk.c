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
	int a;

	while (*s)
		{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[s])
				return (s);
		}
		s++;
		}
	return ('\0')
}
