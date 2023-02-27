#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string
 * @str: string
 * Returns: always 0
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;
	char *x = str;
	int c;

	while (*x != '\0')
	{
		x++;
		a++;
	}
	b = a - 1;
	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
