#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - prints name of file it was compiled from.
 *
 * Return: 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
