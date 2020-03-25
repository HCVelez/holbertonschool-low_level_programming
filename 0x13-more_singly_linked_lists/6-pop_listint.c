#include "lists.h"

/**
 * pop_listint - function to delete head node of a linked list
 * @head: start of list
 * Return: head node's data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!(*head))
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
