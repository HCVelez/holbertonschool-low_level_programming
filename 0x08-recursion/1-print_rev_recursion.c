#include "holberton.h"

/**
 * _print_rev_recursion - fuction to print a string in reverse
 *
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
