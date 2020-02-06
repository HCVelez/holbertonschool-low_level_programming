#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: always 0
*/

int main(void)
{
	int hex = '0';

	while (hex <= '9')
		putchar(hex++);

	hex = 'a';

	while (hex <= 'f')
		putchar(hex++);

	putchar('\n');
	return (0);
}
