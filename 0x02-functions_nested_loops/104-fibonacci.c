#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints thesum of all multiples of 3 or
 * 3 below 1024 (excluded), followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
