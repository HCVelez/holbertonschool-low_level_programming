#include <stdio.h>

void main(void)
{
	int a = 0, b = 1, c;

	putchar(a + '0');
	putchar(b + '0');
	while (c < 100)
	{
		c = a+b;
		printf("%d",c);
		a = b;
		b = c;
		putchar('\n');
	}
	putchar('\n');
}
