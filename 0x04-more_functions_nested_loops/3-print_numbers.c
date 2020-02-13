#include "holberton.h"

/**
 * print_numbers - function to print numbers 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
		_putchar(num++);
	_putchar('\n');
}
