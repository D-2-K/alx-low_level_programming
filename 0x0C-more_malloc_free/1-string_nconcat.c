#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string value
 * @s2: string value
 * @n: number of bytes
 *
 * Return: Pointer to new string for success,
 *         s2 if n >= length of s2,
 *         NULL for failure and empty string if NULL is passed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	i = 0; j = 0; len1 = 0; len2 = 0;

	while (s1 && s1[len1])
