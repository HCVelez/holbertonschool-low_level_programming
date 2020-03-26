#include "holberton.h"

/**
 * binary_to_uint - function to convert a binary number to an unsigned int
 * @b: binary number to print
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int conv = 0;

	if (!b)
		return (0);

	while (b[index])
	{
		if (b[index] == '1')
			conv = conv * 2 + 1;
		else if (b[index] == '0')
			conv *= 2;
		index++;
	}
	return (conv);
}
