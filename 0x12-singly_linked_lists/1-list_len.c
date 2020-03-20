#include "lists.h"

/**
 * list_len - function to return number of elements in a linked list
 * @h: head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int ecount = 0;
	const list_t *element = h;

	if (h == NULL)
		return (0);

	while (element)
	{
		ecount++;
		element = element->next;
	}
	return (ecount);
}
