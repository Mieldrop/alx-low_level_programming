#include <stdio.h>

/**
 * main - computes and print the sum of all multiples
 * of 3 or 5 below 1024
 * Return: Always 0
 */

int main(void)
{
	unsigned long int num3, num5, num;
	int i;

	num3 = 0;
	num5 = 0;
	num = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			num3 = num3 + i;
		} else if ((i % 5) == 0)
		{
			num5 = num5 + i;
		}
	}
	num = num3 + num5;
	printf("%lu\n", num);
	return (0);
}
