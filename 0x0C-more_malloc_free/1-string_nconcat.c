#include "holberton.h"

/**
 * string_nconcat - function cat 2 strings
 *
 * @s1: first string
 * @s2: second string
 * @n: size to allocate
 * Return: pointer to new string or NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int index1 = 0, index2 = 0, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	dest = malloc(sizeof(char) * (len1 + n + 1));

	if (!dest)
		return (NULL);

	while (index1 < len1)
	{
		dest[index1] = s1[index1];
		index1++;
	}

	while (index2 < n)
	{
		dest[index1++] = s2[index2++];
	}

	dest[index1] = '\0';
	if (dest == NULL)
		return (0);

	return (dest);
}
