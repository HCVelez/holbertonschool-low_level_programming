#include <stdio.h>

/**
 * main - function to print the alphabet in lowercase
 *
 * Return: always 0
*/

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
		putchar(alph++);
	putchar('\n');
	return (0);
}
