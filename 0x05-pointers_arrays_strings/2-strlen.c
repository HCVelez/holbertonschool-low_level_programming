#include "holberton.h"

/**
 * _strlen - function to return the length of a string
 *
 * @s: string to get length of
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; len++)
	;

	return (len);
}
