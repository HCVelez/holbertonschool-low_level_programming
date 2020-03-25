#include "lists.h"

/**
 * listint_len - function to return the number of elements in a linked list
 * @h: first element
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int elecount = 0;
	const listint_t *ele = h;

	if (!h)
		return (0);

	while (ele)
	{
		ele = ele->next;
		elecount++;
	}
	return (elecount);
}
