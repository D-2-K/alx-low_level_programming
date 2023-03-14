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
	char *a;
	int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	while ((a[i] = str[i]) != '\0')
		i++;
	return (a);
}
