#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns thr value of a number
 * raised to the power of another
 * @x: value to return
 * @y: the power
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
