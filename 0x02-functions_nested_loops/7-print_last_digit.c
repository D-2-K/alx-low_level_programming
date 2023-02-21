#include "main.h"

/**
 * print_last_digit - prints the last digits of a given number
 * @r: the number
 * Return: the last digit
 */
int print_last_digit(int r)
{
	int ld = r % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
