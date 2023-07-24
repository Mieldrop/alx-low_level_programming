#include "main.h"

/**
 * puts2 - prints every other charater of a string
 * starting with the first charater
 * @str: input string
 * return: print
 */

void puts2(char *str)
{
	int a;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	for (a = 0; a < c; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
