#include "holberton.h"

/**
 * _isupper - check if a character is uppercase letter
 *
 * @c: char to test
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
