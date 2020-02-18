#include "holberton.h"

/**
 * _strcpy - function to copy a string
 *
 * @dest: new string
 * @src: string to copy
 * Return: pointer to new string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
