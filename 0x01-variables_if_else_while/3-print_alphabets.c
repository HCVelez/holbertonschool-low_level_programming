#include <stdio.h>

/**
 * main - program to print alphabet lowercase and uppercase
 *
 * Return: always 0
*/

int main(void)
{
	int lower = 'a';
	int upper = 'A';

	while (lower <= 'z')
		putchar(lower++);
	while (upper <='Z')
		putchar(upper++);
	putchar('\n');
	return (0);
}
