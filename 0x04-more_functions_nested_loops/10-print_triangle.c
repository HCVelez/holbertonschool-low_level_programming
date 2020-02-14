#include "holberton.h"

/**
 * print_triangle - print a triangle at a given size
 *
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int row, space, sym;

	for (row = 1; row <= size; row++)
	{
		for (space = size; space >= row; space--)
			_putchar(' ');

		for (sym = 1; sym <= row; sym++)
			_putchar('#');
		_putchar('\n');
	}
}
