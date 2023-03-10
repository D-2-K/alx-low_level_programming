#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x;

	printf("argc = %d\n", argc);
	printf("argv[]\n");

	for (x = 0; x < argc; x++)
	{
		printf("argv[%d} = %s\n", x, argv[x]);
	}
	return (0);
}
