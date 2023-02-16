#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ju byte(s)\i", (unsigned long)sizeof(a));
	printf("Size of an int: %ju byte(s)\i", (unsigned long)sizeof(b));
	printf("Size of a long int: %ju byte(s)\i", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ju byte(s)\i", (unsigned long)sizeof(d));
	printf("Size of a float: %ju byte(s)\i", (unsigned long)sizeof(f);
	return (0);
}
