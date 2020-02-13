#include "holberton.h"

/**
 * _isdigit - check if a character is a digit
 *
 * @c: char to test
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
