#include "holberton.h"

/**
 * _strstr - function to locate a substring
 *
 * @haystack: string to parse
 * @needle: substring to find
 * Return: pointer to begining of the substring or NULL if nothing is found
 */

char *_strstr(char *haystack, char *needle)
{
	int check = 0;
	char *trav = haystack;
	char *hold;

	while (*trav)
	{
		if (*trav == needle[check])
		{
			hold = trav;
			while (needle[check] == *trav)
			{
				trav++;
				check++;
			}
			if (needle[check] == '\0')
				return (hold);
			else if (*trav != needle[check])
			{
				check = 0;
				trav = hold + 1;
			}
		}
		trav++;
	}
	return (0);
}
