#include "holberton.h"

/**
 * _strpbrk - function to search a string for any set of bytes
 *
 * @s: string to check
 * @accept: string to use for test
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	char *i = s;
	int check = 0;

	while (*i++)
	{
		while (accept[check])
		{
			if (*i == accept[check])
				return (i);
			check++;
		}
		check = 0;
	}
	return (0);
}
