#include <stdio.h>

/**
 * swap_int - function to swap to values
 *
 * @a: first value
 * @b: second value
 * Return: void
*/


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
