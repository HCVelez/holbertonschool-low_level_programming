#include "holberton.h"

/**
 * rev_string - function to reverse a string in memory
 *
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char *rev = s;
	char *beg = s;
	int hold;

	while (*rev != '\0')
		rev++;
	rev--;

	while (beg != rev && beg < rev)
	{
		hold = *beg;
		*beg = *rev;
		*rev = hold;
		rev--;
		beg++;
	}
}
