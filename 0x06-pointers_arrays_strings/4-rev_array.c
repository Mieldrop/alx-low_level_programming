#include "main.h"

/**
 * reverse_array - reverses the content of an array of integer
 * @a: input value
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
