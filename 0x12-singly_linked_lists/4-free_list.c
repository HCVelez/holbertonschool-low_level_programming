#include "lists.h"

/**
 * free_list - function to free a linked list
 * @head: pointer to head element
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
		while (head->next != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
	free(head->str);
	free(head);
}
