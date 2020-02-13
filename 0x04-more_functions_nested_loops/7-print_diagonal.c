#include "holberton.h"

/**
 * print_diagonal - function to print a diagonal line
 *
 * @n: size of line
 * Return: void
 */

void print_diagonal(int n)
{
	int space, row;

	if (n <= 0)
		_putchar('\n');

	for (row = 1; row <= n; row++)
	{
		for (space = 1; space <= n; space++)
		{
			if (space < row)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
