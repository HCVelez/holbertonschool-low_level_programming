#include "holberton.h"

/**
 * find_base - function to find the base
 *
 * @n: number to square
 * @i: test number
 * Return: x
 */

int find_base(int n, int i)
{
	if ((i * i) == n)
		return (i);

	else if ((i * i) > n)
		return (-1);

	return (find_base(n, i + 1));
}


/**
 * _sqrt_recursion - function to get the square root of a number
 *
 * @n: number to square
 * Return: square root or -1 if error
 */

int _sqrt_recursion(int n)
{

	if (n <= 0)
		return (-1);

	return (find_base(n, 1));
}
