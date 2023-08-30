#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the listint_t list
 * @index: the index of the node
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *old_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			old_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		old_node = node;
		node = node->next;
	}
	return (-1);
}
