#include "holberton.h"

/**
 * puts_half - function to print half of a string
 *
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len;

	while (*(str + len++) != '\0')
	;

	if (len % 2 == 1)
		len = (len - 1) / 2;
	else
		len = len / 2;

	while (*(str + len) != '\0')
		_putchar(*(str + len++));

	_putchar('\n');
}
