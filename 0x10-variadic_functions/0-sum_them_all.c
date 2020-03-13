#include "variadic_functions.h"

/**
 * sum_them_all  - function to return sum of all given parameters
 * @n: number of parameters
 * Return: sum or 0
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list nargs;
	int sum = 0;
	unsigned int index = 0;

	if (n == 0)
		return (0);

	va_start(nargs, n);
	while (index < n)
	{
		sum += va_arg(nargs, int);
		index++;
	}
	va_end(nargs);

	return (sum);
}
