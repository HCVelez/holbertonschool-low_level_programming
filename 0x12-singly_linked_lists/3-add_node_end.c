#include "lists.h"

/**
 * add_node_end - function to add a new node to the end of a linked list
 * @head: pointer to head node
 * @str: string to duplicate
 * Return: address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int slen = 0;
	list_t *new_node, *tmp;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[slen])
		slen++;
	new_node->str = strdup(str);
	new_node->len = slen;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
