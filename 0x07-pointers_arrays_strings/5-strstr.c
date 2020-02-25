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

	if (needle[check] == '\0')
		return  (0);

	while (*trav)
	{
		if (*trav == needle[check])
		{
			while (needle[check] == trav[check])
			{
				check++;
			}
			if (needle[check] == '\0')
				return (trav);
			else if (trav[check] != needle[check])
			{
				check = 0;
			}
		}
		trav++;
	}
	return (haystack);
}
