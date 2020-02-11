#include "holberton.h"

/**
 * times_table - print times table up to 9s, sol = solution and col = column
 *
 * Return: void
 */

void times_table(void)
{
	int sol, row, col;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			sol = row * col;

			if (sol > 9)
			{
				_putchar(',');
				_putchar(' ');
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
