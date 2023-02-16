#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %mj byte(s)\n", sizeof(char));
	printf("size of an int: %mj byte(s)\n", sizeof(int));
	printf("size of a long int: %mj byte(s)\n", sizeof(long int));
	printf("size of a long long int: %mj byte(s)\n", sizeof(long long int));
	printf("size of a float: %mj byte(s)\n", sizeof(float));
	return (0);
}
