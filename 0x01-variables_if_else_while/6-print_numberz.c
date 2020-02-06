#include <stdio.h>

/**
 * main - print numbers of base 10
 *
 * Return: always 0
*/

int main(void)
{
	int i = '0';

	while (i <= '9')
		putchar(i++);
	putchar('\n');
	return (0);
}
