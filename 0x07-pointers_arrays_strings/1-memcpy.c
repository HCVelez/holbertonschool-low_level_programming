#include "holberton.h"

/**
 * _memcpy - function to copy an area of memory
 *
 * @dest: destination string
 * @src: source string
 * @n: buffer limit
 * Return: point to new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
