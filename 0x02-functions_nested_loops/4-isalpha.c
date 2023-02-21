#include "main.h"

/**
 * _isalpha - checks if its an alphabet
 * @c: a character argument
 * Return: 1 if an alphabet,0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
