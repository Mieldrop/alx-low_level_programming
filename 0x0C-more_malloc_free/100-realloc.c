#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer of memory previously allocated
 * @old_size: size, in byte, of the allocated space of prt
 * @new_size: the new size, in bytes of the new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		c = malloc(new_size);

		if (c == NULL)
			return (NULL);
		return (c);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	c = malloc(new_size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		c[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (c);
}
