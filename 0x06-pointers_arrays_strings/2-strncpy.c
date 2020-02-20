#include "holberton.h"

/**
 * _strncpy - function to copy a string
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: pointer to new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && *(src + count))
	{
		*(dest + count) = *(src + count);
		count++;
	}

	while (count < n)
	{
		*(dest + count++) = '\0';
	}

	return (dest);
}
