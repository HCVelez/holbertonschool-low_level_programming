#include "holberton.h"
/**
 * is_letter - function to test if given char is a letter
 *
 *
 * @s: char to test
 * Return: 1 if letter 0 if not
 */

int is_letter(char *s)
{
	if (*s >= 'a' && *s <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * is_separator - function to test if given char is a separator
 *
 * @s: char to test
 * Return: 1 if separator, 0 if not
 */

int is_separator(char *s)
{
	s = s - 1;
	switch (*s)
	{
		case ' ':
		case ';':
		case ',':
		case '.':
		case '?':
		case '!':
		case '"':
		case '\t':
		case '\n':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: string to capitalize
 * Return: pointer to the edited string
 */

char *cap_string(char *s)
{
	char *tmp = s;
	int islet = is_letter(tmp);
	int sep = is_separator(tmp);

	while (*tmp)
	{
		if (islet == 1)
		{
			if (sep == 1)
				*tmp -= 32;
		}
		tmp++;
	}
	return (s);
}
