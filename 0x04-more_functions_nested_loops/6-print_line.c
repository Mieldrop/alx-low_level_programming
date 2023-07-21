#include "main.h"

/**
 * print_line - prints a straight line
 * @n: the number of times the character should print
 */

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

