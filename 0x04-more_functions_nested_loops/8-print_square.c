#include "holberton.h"

/**
 * print_square - function to print a square to a given size
 *
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int sym, row;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (sym = 1; sym <= size; sym++)
			_putchar('#');
		_putchar('\n');
	}
}
