#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns th natural square root of a number
 * @n: number to square root
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the natural square root
 * @n: the number to square root
 * @i: iterate number
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int s = i * i;

	if (s > n)
		return (-1);
	else if (s == n)
		return (i);
	return (_sqrt(n, i + 1));
}
