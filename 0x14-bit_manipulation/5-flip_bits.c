#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the bits
 * @m: the bit s to flip
 * Return: the number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int new = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = new >> i;
		if (num & 1)
			count++;
	}
	return (count);
}
