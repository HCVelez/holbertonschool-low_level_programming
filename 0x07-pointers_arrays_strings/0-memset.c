#include "holberton.h"

/**
 * _memset - function to fill memeory with a constant byte
 *
 * @s: string to edit
 * @b: char to use in edit
 * @n: limit on length of string
 * Return: pointer to new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
