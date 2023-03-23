#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable parameter values
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int x;

	va_start(a, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(a, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
