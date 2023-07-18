#include "main.h"

/**
 * print_sign - Prints the sigh of a number
 * Return: 1 and print + if is greater than zero
 * 0 and ptint 0 if is zero
 * -1 and print - if is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
