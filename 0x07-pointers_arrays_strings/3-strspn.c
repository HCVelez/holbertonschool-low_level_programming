#include "holberton.h"

/**
 * _strspn - function to get the length of a prefix string
 *
 * @s: string to search
 * @accept: string to compare
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0, compare, hold = 0;

	while (s[index] != '\0')
	{
		if (hold != index)
			break;

		for (compare = 0; accept[compare] != '\0'; compare++)
		{
			if (s[index] == accept[compare])
				hold++;
		}
		index++;
	}
	return (hold);
}
