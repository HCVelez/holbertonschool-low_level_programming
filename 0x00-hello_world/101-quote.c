#include <stdio.h>

/**
 * main - program to print a sting to standard error
 *
 * Return: 1
*/

int main(void)
{
	int len;
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (len = 0; str[len] != \n; len++)
		;
	len++;
	write(1, str, len);
	return (1);
}
