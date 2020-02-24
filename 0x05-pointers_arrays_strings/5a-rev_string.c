#include "holberton.h"

/**
 * main - print text
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int len = 0;
	int beg = 0;
	char *rev = 0;

	rev = 0
	while (*(s + len++))
	{
		*(rev + len) = *(s + len);
	}
	len--;

	while (s[beg] != '\0')
	{
		s[beg++] = rev[len--];
	}

}
