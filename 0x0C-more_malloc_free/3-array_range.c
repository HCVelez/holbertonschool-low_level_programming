#include "holberton.h"

/**
 * array_range - function to create an arry of integers
 *
 * @min: minimun value
 * @max: max value
 * Return: pointer to allocated memory, or NULL
 */

int *array_range(int min, int max)
{
	int *dest;
	int index = 0;

	if (min > max)
		return (NULL);

	dest = malloc(sizeof(int) * (max - min +1));
	if (!dest)
		return (NULL);

	while (index + min <= max)
	{
		dest[index] = min + index;
		index++;
	}
	return (dest);
}
