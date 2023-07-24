#include "main.h"

/**
 * puts2 - prints every other charater of a string
 * starting with the first charater
 * @str: input string
 * return: 0
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;
	int c;

	while (*str != '\0')
	{
		str++;
		a++;
	}
	b = a - 1;
	for (c = 0; c <= b; b++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
