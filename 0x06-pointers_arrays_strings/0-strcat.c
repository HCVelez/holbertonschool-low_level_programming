#include "holberton.h"

/**
 * _strcat - function to cat 2 strings
 *
 *@dest: destination string
 *@src: source of string to cat
 * Return: pointer to new string
 */

char *_strcat(char *dest, char *src)
{
	char *beg = dest;

	while(*dest)
		dest++;

	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (beg);
}
