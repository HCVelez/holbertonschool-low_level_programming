#include <stdio.h>

/**
 * main - print double digit numbers seperated by commas
 *
 * Return: always 0
*/

int main(void)
{
	int i = '0';
	int ii = '0';

	while (i <= '9')
	{
		while (ii <= '9')
		{
			putchar(i);
			putchar(ii);
			if (i != '9' || ii != '9')
			{
				putchar(',');
				putchar(' ');
			}
			ii++;
		}
		ii = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
