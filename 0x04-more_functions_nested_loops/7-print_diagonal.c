#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times the line is printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; a++)
			{
				_putchar(' ');
			}
			_putchar('/');
			_putchar('\n');
}
