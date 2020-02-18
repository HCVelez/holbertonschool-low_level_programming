#include "holberton.h"

/**
 * puts2 - function that prints every other char in a string
 *
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int ev;

	for (ev = 0; *(str + ev) != '\0'; ev++)
	{
		if (ev % 2 == 0)
			_putchar(*(str + ev));
	}
	_putchar('\n');
}
