#include "holberton.h"

/**
 * find_prime - function to find prime number
 *
 * @n: number to test against
 * @i: test number
 * Return: prime number
 */

int find_prime(int n, int i)
{
	if (n % i != 0 && i < 10)
		return (find_prime(n, i + 1));

	else if (n % i == 0)
		return (0);

	return (1);
}


/**
 * is_prime_number - function to return prime number of a given value
 *
 * @n: nmber to process
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1 || (n % 2) == 0)
		return (0);

	return (find_prime(n, 2));
}
