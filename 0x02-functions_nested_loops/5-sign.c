#include "holberton.h"

/**
 * print_sign - program to check if a number is positive or negative
 *
 * @n: number to be tested
 * Return: 1 if pos, 0 if 0 and -1 if neg
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
