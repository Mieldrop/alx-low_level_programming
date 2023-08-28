#include "lists.h"

/**
 * listint_len - returns the numbers in a linked listint_t list
 * @h: listint_t list
 * Return: the node
 */
size_t listint_len(const listint_t *h)
{
	size_t c;

	if (h == NULL)
		return (0);
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
