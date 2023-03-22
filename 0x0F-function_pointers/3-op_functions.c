#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two values
 * @a: parameter value
 * @b: parameter value
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two values
 * @a: parameter value
 * @b: parameter value
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two values
 * @a: parameter value
 * @b: parameter value
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two values
 * @a: parameter value
 * @b: parameter value
 *
 * Return: Division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two values
 * @a: parameter value
 * @b: parameter value
 *
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
