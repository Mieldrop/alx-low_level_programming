#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the list_t list
 * @str: the new node to add
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int l = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);

	while (str[l])
		l++;

	t->len = l;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}
