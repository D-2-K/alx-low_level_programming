#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to find factorial of
 *
 * Return: If n is lower than 0, -1 to indicate error
 *         if n is greater than 0, the factorial of n
 *         factorial of 0 is 1
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}
