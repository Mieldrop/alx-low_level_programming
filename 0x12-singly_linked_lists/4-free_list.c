#include "lists.h"

/**
 * free_list - fress a list_t list
 * @head: list_t list
 * Return: the node
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
