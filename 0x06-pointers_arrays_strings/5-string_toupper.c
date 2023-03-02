#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @y: pointer
 * Return: y
 */

char *string_toupper(char *y)
{
	int x;

	x = 0;
	while (y[x] != '\0')
	{
		if (y[x] >= 'a' && y[x] <= 'z')
			y[x] = y[x] - 32;
		x++;
	}
	return (y);
}
