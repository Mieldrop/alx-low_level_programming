#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each of an array
 * @array: an array
 * @size: the size to print
 * @action: print in regular or hax
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
