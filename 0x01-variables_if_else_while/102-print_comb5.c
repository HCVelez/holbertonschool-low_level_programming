#include <stdio.h>

/**
 * main - print 2 2 digit number combos seperated by commas
 *
 * Return: always 0
*/

int main(void)
{
	int li = 0;
	int ri = 1;

	while (li < 100)
	{
		while (ri < 100)
		{
			putchar((li / 10) + '0');
			putchar((li % 10) + '0');
			putchar(' ');
			putchar((ri / 10) + '0');
			putchar((ri % 10) + '0');

			if (li != 98)
			{
				putchar(',');
				putchar(' ');
			}
			ri++;
		}
		li++;
		ri = li + 1;
	}
	putchar('\n');
	return (0);
}
