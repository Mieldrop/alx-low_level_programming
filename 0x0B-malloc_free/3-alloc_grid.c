#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: first integer
 * @height: seconde integer
 * Return: NULL on fail, or if width or height is 0 0r
 * negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **len;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = malloc(sizeof(int *) * height);

	if (len == NULL)
	{
		free(len);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		len[i] = malloc(sizeof(int) * width);

		if (len[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(len[j]);
			}
			free(len);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			len[k][l] = 0;
		}
	}

	return (len);
}
