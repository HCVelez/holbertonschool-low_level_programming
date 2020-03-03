#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that copies a string to a newly alloced space in memory
 *
 * @str: string to copy
 * Return: dest if successful, 0/NULL if not
 */

char *_strdup(char *str)
{
	unsigned int index = 0, len = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[len++])
	;

	dest = malloc(sizeof(char) * len);

	if (!dest)
		return (0);

	while (str[index])
	{
		dest[index] = str[index];
		index++;
	}

	if (dest[index] == '\0')
		return (dest);

	return (0);
}
