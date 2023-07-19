#include <stdio.h>

/**
 * main - finds and prints the sum of even value term
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, num;

	j = 1;
	k = 2;
	num = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			num = num + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", num);
	return (0);
}
