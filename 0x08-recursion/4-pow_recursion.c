#include "holberton.h"

/**
 * _pow_recursion - function to get x raised to the power of y
 *
 * @x: base number
 * @y: power number
 * Return: value the power or -1 if error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, --y));
}
