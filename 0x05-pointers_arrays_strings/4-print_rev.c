#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len++] != '\0')
	;
	len--;

	while (len > 0)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
