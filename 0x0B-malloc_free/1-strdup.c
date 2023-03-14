#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory space
 * @str: string value
 *
 * Return: Pointer to duplicated string or NULL if otherwise
 */

char *_strdup(char *str)
{
	char *yyy;
	int i, r = 0;

	if  (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	yyy = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
