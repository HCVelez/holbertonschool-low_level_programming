#include <stdio.h>

/**
 * main - print double digit numbers seperated by commas
 *
 * Return: always 0
*/

int main(void)
{
	int i = '0';
	int ii = '1';

	while (i <= '8')
	{
		while (ii <= '9')
		{
			if (i != ii)
			{
				putchar(i);
				putchar(ii);
			}
			if ((i != '8' || ii != '9') && i != ii)
			{
				putchar(',');
				putchar(' ');
			}
			ii++;
		}
		i++;
		ii = (i + 1);
	}
	putchar('\n');
	return (0);
}
