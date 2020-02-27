#include "holberton.h"

/**
 * length - function to get length of a string
 *
 * @s: string to test
 * Return: length
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);

	return (length(s + 1));
}

/**
 * pal - function to test if a string is a palindrome
 *
 * @end: length of string
 * @s: begining of string
 * Return: 1 if palindrome 0 if not
 */

int pal(char *s, char *end)
{
	if (s > end)
		return (1);

	else if (*s != *end)
		return (0);

	return (pal(s + 1, end - 1));
}

/**
 * is_palindrome - function to check if a string is a palindrome
 *
 * @s: string to test
 * Return: 1 if s is a palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	int end = length(s);

	return (pal(s, (s + end)));
}
