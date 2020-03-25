#include "lists.h"

/**
 * sum_listint - function to return the sum of all data in a linked list
 * @head: start of list
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (!head)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
