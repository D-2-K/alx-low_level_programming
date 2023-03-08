#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: Number to be raised
 * @y: power to be used
 *
 * Return: If y is lower than 0 return -1
 *         Value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
