#include "holberton.h"

/**
 * _strchr - function to locate a char in a string
 *
 * @s: string parse
 * @c: char to find
 * Return: pointer to first occurance of var c
 */

char *_strchr(char *s, char c)
{
	char *find = s;

	if (c == '\0')
		return (0);

	while (*find)
	{
		if (*find == c)
			return (find);
		find++;
	}
	return (0);
}
