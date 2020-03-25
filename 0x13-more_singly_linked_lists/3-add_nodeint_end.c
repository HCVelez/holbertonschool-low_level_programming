#include "lists.h"

/**
 * add_nodeint_end - function to add a node to the end of a linked list
 * @head: start of list
 * @n: element to add
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newele, *tmp;

	newele = malloc(sizeof(listint_t));
	if (!newele)
		return (0);

	newele->n = n;
	newele->next = NULL;

	if (*head == NULL)
		*head = newele;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = newele;
	}
	return (newele);
}
