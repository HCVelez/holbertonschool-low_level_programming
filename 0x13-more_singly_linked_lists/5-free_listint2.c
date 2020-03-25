#include "lists.h"

/**
 * free_listint2 - function to free a list to a double pointer
 * @head: start of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
