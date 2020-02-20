#include "holberton.h"

/**
 * string_toupper - function to swap lowercase letters of a string to uppercase
 *
 * @s: string to change
 * Return: pointer to changed string
 */

char *string_toupper(char *s)
{
	int index;

	while (*(s + index))
	{
		if (*(s + index) >= 'a' && *(s + index) <= 'z')
			*(s + index) = *(s + index) - 32;
		index++;
	}
	return (s);
}
