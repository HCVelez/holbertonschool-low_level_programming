#include "holberton.h"

/**
 * print_times_table - print times table up to n, sol = solution and col = column
 *
 * @n: size of table
 * Return: void
 */

void print_times_table(int n)
{
	int sol, row, col;

	if (n > 15 || n < 0)
		return;

	for (col = 0; col <= n; col++)
	{
		for (row = 0; row <= n; row++)
		{
			sol = row * col;

			if (sol > n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (sol > 99)
					_putchar((sol / 100) + '0');
				if (sol > 9)
					_putchar((sol / 10) + '0');
				_putchar((sol % 10) + '0');
			}
			else
			{
				if (row != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(sol + '0');
			}
		}
		_putchar('\n');
	}
}
