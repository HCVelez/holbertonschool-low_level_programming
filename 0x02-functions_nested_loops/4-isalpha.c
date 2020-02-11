#include "holberton.h"

/**
 * _islower - program to check if a char is lowercase
 *
 * @c: character to be tested
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
