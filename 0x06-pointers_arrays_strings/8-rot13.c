#include "holberton.h"

/**
 * rot13 - function to encode a string using rot13
 *
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char *arr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *enc = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *beg = s;
	int index;

	while (*beg)
	{
		for (index = 0; arr[index]; index++)
		{
			if (arr[index] == *beg)
			{
				*beg = enc[index];
				break;
			}
		}
		beg++;
	}
	return (s);
}
