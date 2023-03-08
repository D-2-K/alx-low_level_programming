#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string being examined
 *
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
