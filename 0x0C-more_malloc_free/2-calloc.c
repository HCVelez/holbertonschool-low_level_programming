#include "holberton.h"

/**
 * _calloc - function to allocate memory for an array
 *
 * @size: number of elements
 * @nmemb: number of elements
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	dest = malloc(size * nmemb);

	if (!dest)
		return (NULL);

	while (index < (nmemb * size))
		dest[index++] = 0;

	return (dest);
}
