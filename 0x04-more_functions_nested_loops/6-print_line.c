#include "holberton.h"

/**
 * print_line - function to print a line
 *
 * @n: size of line
 * Return: void
 */

void print_line(int n)
{
	int line = 1;

	while (line <= n)
	{
		if (n <= 0)
			break;

		_putchar('_');
		line++;
	}
	_putchar('\n');
}
