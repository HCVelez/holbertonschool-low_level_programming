#include "holberton.h"

/**
 * malloc_checked - function to allocate memory
 *
 * @b: memory size
 * Return: pointer to allocated memory, 98 if not
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(char) * b);

	if (!s)
	{
		exit(98);
		free(s);
	}
	return (s);
}
