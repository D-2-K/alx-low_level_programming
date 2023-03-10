#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string being searched
 * @accept: prefix being measured
 * Return: Number of bytes in s which consist only
 *          of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				bytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
