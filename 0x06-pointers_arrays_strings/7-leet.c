#include "holberton.h"

/**
 * leet - function to change text to 1337 sp34k
 *
 * @s: string to change
 * Return: pointer to augmented string
 */

char *leet(char *s)
{
	char let[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char swap[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int index, count;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (index = 0; let[index] != '\0'; index++)
		{
			if (s[index] == let[count])
				s[count] = swap[index];
		}
	}

	return (s);
}
