#include "lists.h"

/**
 * print_listint - function to print all elements of a given list
 * @h: start of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodec = 0;
	const listint_t *node = h;

	if (!h)
		return (0);

	while (node)
	{
		if (node->n)
			printf("%d\n", node->n);
		nodec++;
		node = node->next;
	}
	return (nodec);
}
