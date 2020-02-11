#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 *
 * @n: number to
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			if (n != 98 && n > 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}

	if (n == 98)
		printf("98\n");

	else
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
}
