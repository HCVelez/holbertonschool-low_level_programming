#include "holberton.h"

/**
 * _strncat - function to cat n bytes of one string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to new string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *beg = dest;
	int count = 0;

	while (*dest)
		dest++;

	while (*src && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	return (beg);
}
