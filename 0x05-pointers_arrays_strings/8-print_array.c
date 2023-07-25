#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integer
 * @a: first integer
 * @n: second integer
 * return: nothing
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 5))
		{
			printf(", ");
		}
	}
	printf("\n");
}
