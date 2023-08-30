#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * looped_listint_len - count the number of unique node in a list
 * @head: listint_t list
 * Return: void
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *list, *new;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	list = head->next;
	new = (head->next)->next;

	while (new)
	{
		if (list == new)
		{
			list = new;
			while (list != new)
			{
				node++;
				list = list->next;
				new = new->next;
			}

			list = list->next;
			while (list != new)
			{
				node++;
				list = list->next;
			}
			return (node);
		}
		list = list->next;
		new = (new->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a linked list
 * @head: listint_t list
 * Return: the number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, num = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (num = 0; num < node; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
