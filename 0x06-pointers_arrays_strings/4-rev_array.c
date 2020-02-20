#include "holberton.h"

/**
 * reverse_array - function to reverse an array
 *
 * @a: array to reverse
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int index = 0;
	int tmp;

	while (index < (n / 2))
	{
		tmp = a[index];
		a[index] = a[(n - 1) - index];
		a[(n - 1) - index] = tmp;
		index++;
	}
}
