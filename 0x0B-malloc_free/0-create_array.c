#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of array
 * @c: char to fill array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);

	while (index < size)
		array[index++] = c;

	if (index == size)
		return (array);

	return (NULL);
}
