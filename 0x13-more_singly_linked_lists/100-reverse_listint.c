#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: listint_t list
 * Return: a pointer to the first node of the rversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
