#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: an array
 * @size: size to print
 * @cmp: integer
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
