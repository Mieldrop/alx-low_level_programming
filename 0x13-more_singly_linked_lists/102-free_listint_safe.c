#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 * @head: listint_t list
 * Return: address of node where the loop starts, or NULL if empty
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a linked list
 * @h: listint_t list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *looped;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	looped = find_listint_loop_fl(*h);
	for (len = 0; (*h != looped || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == looped && loop)
		{
			if (looped == looped->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
