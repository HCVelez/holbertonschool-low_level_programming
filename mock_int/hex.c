#include <stdio.h>

/**
 * func_name - description
 *
 * Return: always 0
*/

void main(void)
{
	int i;
	int alph = 'a';

	for (i = 0; i <= 16; i++)
	{
		if (i > 9)
			putchar(alph++);
		if (i <= 9)
			putchar(i + '0');
	}
	putchar('\n');
}
