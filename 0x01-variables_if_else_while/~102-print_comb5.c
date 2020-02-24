#include <stdio.h>

/**
 * main - print 2 2 digit number combos seperated by commas
 *
 * Return: always 0
*/

int main(void)
{
	int li = '0';
	int lii = '0';
	int ri = '0';
	int rii = '1';

	while (li <= '9')
	{
		while (lii <= '8')
		{
			while (ri <= '9')
			{
				while (rii <= '9'
				if (i != ii && ii != iii)
				{
					putchar(i);
					putchar(ii);
					putchar(iii);
				}
				if ((i != '7' || ii != '8' || iii != '9') && i != ii && ii != iii)
				{
					putchar(',');
					putchar(' ');
				}
				iii++;
			}
			ii++;
			iii = (ii + 1);
		}
		i++;
		ii = (i + 1);
		iii = (ii + 1);
	}
	putchar('\n');
	return (0);
}
