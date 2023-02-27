#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string
 * Return: always 0
 */

void puts_half(char *str)
{
	int a;
	int n;
	int x;

	x = 0;

	for (a = 0; str[a] != '\0'; a++)
		x++;

	n = (x / 2);

	if ((x % 2) == 1)
		n = ((x + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
