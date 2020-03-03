#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function to cat a string to another string
 *
 * @s1: first string
 * @s2: second string
 * Return: dest if successful, 0/NULL if not
 */

char *str_concat(char *s1, char *s2)
{
	int index1 = 0, index2 = 0, len1 = 0, len2 = 0;
	char *dest;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1++])
	;
	len1--;

	while (s2[len2++])
	;

	dest = malloc(sizeof(char) * (len1 + len2));

	if (!dest)
		return (NULL);

	while (index1 < len1)
	{
		dest[index1] = s1[index1];
		index1++;
	}

	while (index1 < (len1 + len2))
	{
		dest[index1] = s2[index2];
		index1++;
		index2++;
	}

	if (dest == NULL)
		return (NULL);

	return (dest);
}
