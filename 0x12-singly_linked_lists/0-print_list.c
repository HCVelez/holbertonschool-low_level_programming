#include "lists.h"

/**
 * print_list - function to print the elements of a linked list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int ncount = 0;
	const list_t *node = h;

	if (!h)
		return (0);

	while (node)
	{
		if (node->str)
			printf("[%d] %s\n", node->len, node->str);
		else
			printf("[0] (nil)\n");
		ncount++;
		node = node->next;
	}
	return (ncount);
}
