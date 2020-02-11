#include "holberton.h"

/**
 * _isalpha - program to check if a char is a letter
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
