#include "holberton.h"

/**
 * print_last_digit - function print the last digit of a given number
 *
 * @n: number to process
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
		n = n % 10;

	if (n < 0)
		n = (n * -1) % 10;

	_putchar(n + '0');
	return (n);
}
