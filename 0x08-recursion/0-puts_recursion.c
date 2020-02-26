#include "holberton.h"

/**
 * _puts_recersion - function to print a string
 *
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
