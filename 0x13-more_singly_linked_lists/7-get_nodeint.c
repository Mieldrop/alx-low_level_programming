#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the listint_t list
 * @index: the index of the node
 * Return: the pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
