#include "holberton.h"

/**
 * set_bit - function to set a bit to 1 at a given index
 * @n: pointer to number
 * @index: bit to change
 * Return: 1 if it worked or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
