#include "main.h"

/**
 * print_line - prints a line as per parameters provided
 * @n: number of times a line is drawn
 * Return: always 0
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
