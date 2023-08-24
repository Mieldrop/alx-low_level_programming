#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t list
 * Return: the node
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}

	return (c);
}
