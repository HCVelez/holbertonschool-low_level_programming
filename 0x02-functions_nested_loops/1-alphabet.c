#include "holberton.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');

}
