#include "main.h"

/**
 * main - print lowercase alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	int x;
	char letter;

	for (x = 1; x <= 10; x++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');

}
