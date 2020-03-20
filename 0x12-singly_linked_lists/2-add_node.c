#include "lists.h"

/**
 * add_node - function to add a new node to the beging of a list
 * @head: pointer to head node
 * @str: pointer to string to duplicaste
 * Return: pointer to to new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int slen = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	while (str[slen])
		slen++;

	new_node->str = strdup(str);
	new_node->len = slen;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
