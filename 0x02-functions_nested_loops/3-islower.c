#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: a character argument
 * Return: 1 if lowercase, 0 if noot
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
