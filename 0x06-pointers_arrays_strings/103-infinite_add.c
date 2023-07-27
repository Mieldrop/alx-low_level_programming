#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer
 * Return: o
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: input value
 * @n2: input value
 * @r: is the buffer that function will use to store the result
 * @size_r: the buffer size
 * Return: 0 if the result cannot be stored in r function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, j = 0, num = 0;
	int sum1 = 0, sum2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || flow == 1)
{
		if (i < 0)
			sum1 = 0;
		else
			sum1 = *(n1 + i) - '0';
		if (j < 0)
			sum2 = 0;
		else
			sum2 = *(n2 + j) - '0';
		temp_tot = sum1 + sum2 + flow;
		if (temp_tot >= 10)
			flow = 1;
		else
			flow = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (temp_tot % 10) + '0';
		num++;
		j--;
		i--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
