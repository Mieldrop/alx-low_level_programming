#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int t;

	for (t = 0 ; t < 10 ; t++)
		putchar(t + '0');
	putchar('\n');
	return (0);
}
