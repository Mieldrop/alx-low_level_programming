#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: listint_t list
 * @n: the new node to add
 * Return: the address of the new element
 * or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
