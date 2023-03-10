#include "main.h"

/**
 * _isalpha - function that cjecks for alphabet
 * @c: value to be checked
 *
 * Return: 1 it true and 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
