#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
