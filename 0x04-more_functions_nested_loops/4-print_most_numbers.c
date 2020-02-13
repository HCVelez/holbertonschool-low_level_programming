#include "holberton.h"

/**
 * print_most_numbers - function to print numbers 0-9 and skip 2 & 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
			_putchar(num++);
		else
			num++;
	}
	_putchar('\n');
}
