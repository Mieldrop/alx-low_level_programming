#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: listint_t list
 * Return: the pointer to node, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
