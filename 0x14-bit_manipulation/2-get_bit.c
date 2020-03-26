#include "holberton.h"

/**
 * get_bit - function to return the value of a bit
 * @n: number
 * @index: bit to get
 * Return: bit value or -1 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	while (n)
	{
		n = ((n >>index) & 1);
		if (index < 64)
			return (n);
		return (-1);
	}
	return (-1);
}
