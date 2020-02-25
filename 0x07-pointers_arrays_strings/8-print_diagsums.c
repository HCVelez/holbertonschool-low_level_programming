#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function to print the sum of 2 diagonals of a square matrix
 *
 * @a: pointer to an array
 * @size: array size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index = 0;
	long sum = 0;

	while (index < size)
	{
		sum += a[index + (index * size)];
		index++;
	}

	printf("%li, ", sum);

	index = size - 1;
	sum = 0;

	while (index >= 0)
	{
		sum += a[(size - 1) + (index * (size - 1))];
		index--;
	}

	printf("%li\n", sum);
}
