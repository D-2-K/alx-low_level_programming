#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number being evaluated
 *
 * Return: If n doesnt have a natural square root, return -1
 *         If n has a natural square root, return the natural
 *         square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (sqrt(n, root));
}
