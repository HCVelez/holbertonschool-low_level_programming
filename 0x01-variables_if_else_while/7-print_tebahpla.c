#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: always 0
*/

int main(void)
{
	int lower = 'z';

	while (lower >= 'a')
		putchar(lower--);
	putchar('\n');
	return (0);
}
