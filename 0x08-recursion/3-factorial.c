#include "holberton.h"

/**
 * factorial - function to find the factorial of a given number
 *
 * @n: number to use
 * Return: factorial or -1 if there is an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
