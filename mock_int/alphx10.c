#include <stdio.h>

void main(void)
{
	int alph, count;

	for (count = 0; count <= 9; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			putchar(alph);
		}
		putchar('\n');
	}
}
