#include "main.h"

/**
 * print_last_digit - prints the last digits of a given number
 * @r: the number
 * Return: the last digit
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
	r = -r;
	x = r % 10;
	_putchar(x + '0');
	return (x);
}
