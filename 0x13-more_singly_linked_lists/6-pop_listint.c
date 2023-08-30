#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: the listint_t list
 * Return: the head node's data(n)
 * return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
