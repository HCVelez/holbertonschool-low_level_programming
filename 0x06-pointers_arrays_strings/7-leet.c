#include "holberton.h"

/**
 * leet - funtion to change text to 1337 sp34k
 *
 * @s: string to change
 * Return: pointer to augmented string
 */

char *leet(char *s)
{
	int let[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int swap[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int index = 0;
	int test = 0;

	while (s[index] != '\0')
	{
		while (let[test] != '\0')
		{
			if (s[index] == let[test]
				s[index] = swap[test];
		index++;
		test++
		}
	}

	return (s);
}
