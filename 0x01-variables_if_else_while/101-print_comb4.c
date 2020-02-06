#include <stdio.h>

/**
 * main - print triple digit numbers seperated by commas
 *
 * Return: always 0
*/

int main(void)
{
	int i = '0';
	int ii = '1';
	int iii = '2';

	while (i <= '7')
	{
		while (ii <= '8')
		{
			while (iii <= '9')
			{
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
