#include "holberton.h"

/**
 * flip_bits - function to return the number of bits you need to flip
 * @n:1st number
 * @m: 2nd number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp;
	unsigned long int flip = 0;

	cmp = n ^ m;

	while (cmp != 0)
	{
		if ((1 & cmp) > 0)
			flip++;
		cmp >>= 1;
	}

	return (flip);
}
