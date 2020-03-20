#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: pointer to head element
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;

	tmp = head;
	while (!head->next)
	{
		head = head->next;
		free(tmp);
	}
}
