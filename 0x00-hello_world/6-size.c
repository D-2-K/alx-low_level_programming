#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %j byte(s)\n", sizeof(char));
	printf("size of an int: %j byte(s)\n", sizeof(int));
	printf("size of a long int: %j byte(s)\n", sizeof(long int));
	printf("size of a long long int: %j byte(s)\n", sizeof(long long int));
	printf("size of a float: %j byte(s)\n", sizeof(float));
	return (0);
}
