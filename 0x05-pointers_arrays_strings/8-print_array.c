#include <stdio.h>

/**
 * print_array - function to print n elements of an array of ints
 *
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index < (n - 1))
			printf("%d, ", a[index]);
		else if (index == (n - 1))
			printf("%d", a[index]);
		index++;
	}
	printf("\n");
}
