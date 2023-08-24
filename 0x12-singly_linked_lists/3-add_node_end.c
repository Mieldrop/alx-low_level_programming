#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a ilst_t list
 * @head: list_t list
 * @str: the new node to add
 * Return: the address of a new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *du;
	int l;
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	du = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = du;
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
