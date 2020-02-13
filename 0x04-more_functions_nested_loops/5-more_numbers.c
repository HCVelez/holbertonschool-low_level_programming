#include "holberton.h"

/**
 * more_numbers - function to print 10 rows of numbers 0-9
 *
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int row = 0;

	while (row <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
				_putchar(num + '0');
		}
		_putchar('\n');
		row++;
	}
}
