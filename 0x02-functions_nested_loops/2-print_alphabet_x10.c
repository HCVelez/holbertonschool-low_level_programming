#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alph;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
